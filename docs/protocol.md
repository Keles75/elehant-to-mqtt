SVD-15 water counter protocol decoding
======================================

*(eng. TBD)*


Расшифровка протокола водяного счетчика Элехант СВД-15
======================================================

BLE сниффером удалось определить, что счетчик шлет все данные только в пакетах advertise.
Ни каких GATT не реализовано. Пейринга - тоже.

Из дальнейшего дампа пакетов объявлений видно что используются два BD-ADDR:

- `B0:01:02:<device number>` - используется для передачи значения (частично распознано)
- `B1:01:02:<device number>` - неизвестно, но данные всегда одни и теже


В оригинальном приложении отображаются:
- Серийный номер прибора (найден)
- Показания счетчика (найден)
- Температура (не найдено, появилась в приложении в декабре 2018 (~v3.1.3))


Mfg Data at B0
--------------

```
b0:01:02:00:26:e8 - "mfg_len":19, "mfg_data":"FFFF80370A010201E826003900000065D70A00"
```

Little Endian.

| bytes | type | value  | desc |
|-------|------|--------|------|
| 0-1   | u16  | 0xffff | manufacturer id \* |
| 2     | u8   | 0x80   | unknown, always 80 |
| 3     | u8   | 0x37   | some kind of sequence counter, +1 on each next pkt |
| 4-7   | u8[4] | `0A 01 02 01` | unknown, always that value |
| 8-10  | u24  | 0x0026e8 | device number, same as in BD-ADDR |
| 11-14 | u32  | 0x00000039 | counter in 0.1 L |
| 15    | u8 | 0x65 | unknown, always 65 (?) |
| 16    | u8 | 0xd7 | unknown, different on devices |
| 17    | u8 | 0x0a | unknown, different on devices |
| 18    | u8 | 0x00 | unknown, always 00 |

\* See Supplement to the Bluetooth Core Specification, ver.7, Part.A, section 1.4: "MANUFACTURER SPECIFIC DATA".


Mfg Data at B1
--------------

```
b1:01:02:00:26:e8 - "mfg_len":19, "mfg_data":"FFFF80246C72A598DEA4CFF3D7F0DAD3BF253A"
```

Always same for one device.
