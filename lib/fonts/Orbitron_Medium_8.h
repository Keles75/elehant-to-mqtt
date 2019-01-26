// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Orbitron_Medium_8[] PROGMEM = {
	0x0B, // Width: 11
	0x08, // Height: 8
	0x20, // First Char: 32
	0xE0, // Numbers of Chars: 224

	// Jump Table:
	0xFF, 0xFF, 0x00, 0x02,  // 32:65535
	0x00, 0x00, 0x01, 0x02,  // 33:0
	0x00, 0x01, 0x03, 0x03,  // 34:1
	0x00, 0x04, 0x06, 0x06,  // 35:4
	0x00, 0x0A, 0x06, 0x06,  // 36:10
	0x00, 0x10, 0x07, 0x08,  // 37:16
	0x00, 0x17, 0x07, 0x08,  // 38:23
	0x00, 0x1E, 0x01, 0x02,  // 39:30
	0x00, 0x1F, 0x02, 0x02,  // 40:31
	0x00, 0x21, 0x02, 0x02,  // 41:33
	0x00, 0x23, 0x04, 0x04,  // 42:35
	0x00, 0x27, 0x03, 0x03,  // 43:39
	0x00, 0x2A, 0x01, 0x02,  // 44:42
	0x00, 0x2B, 0x04, 0x04,  // 45:43
	0x00, 0x2F, 0x01, 0x02,  // 46:47
	0x00, 0x30, 0x04, 0x04,  // 47:48
	0x00, 0x34, 0x06, 0x07,  // 48:52
	0x00, 0x3A, 0x03, 0x03,  // 49:58
	0x00, 0x3D, 0x06, 0x07,  // 50:61
	0x00, 0x43, 0x06, 0x07,  // 51:67
	0x00, 0x49, 0x06, 0x06,  // 52:73
	0x00, 0x4F, 0x06, 0x07,  // 53:79
	0x00, 0x55, 0x06, 0x07,  // 54:85
	0x00, 0x5B, 0x05, 0x05,  // 55:91
	0x00, 0x60, 0x06, 0x07,  // 56:96
	0x00, 0x66, 0x06, 0x07,  // 57:102
	0x00, 0x6C, 0x01, 0x02,  // 58:108
	0x00, 0x6D, 0x01, 0x02,  // 59:109
	0x00, 0x6E, 0x03, 0x04,  // 60:110
	0x00, 0x71, 0x05, 0x05,  // 61:113
	0x00, 0x76, 0x04, 0x04,  // 62:118
	0x00, 0x7A, 0x05, 0x05,  // 63:122
	0x00, 0x7F, 0x06, 0x07,  // 64:127
	0x00, 0x85, 0x06, 0x07,  // 65:133
	0x00, 0x8B, 0x06, 0x07,  // 66:139
	0x00, 0x91, 0x06, 0x07,  // 67:145
	0x00, 0x97, 0x06, 0x07,  // 68:151
	0x00, 0x9D, 0x06, 0x06,  // 69:157
	0x00, 0xA3, 0x06, 0x06,  // 70:163
	0x00, 0xA9, 0x06, 0x07,  // 71:169
	0x00, 0xAF, 0x06, 0x07,  // 72:175
	0x00, 0xB5, 0x01, 0x02,  // 73:181
	0x00, 0xB6, 0x06, 0x06,  // 74:182
	0x00, 0xBC, 0x06, 0x06,  // 75:188
	0x00, 0xC2, 0x06, 0x06,  // 76:194
	0x00, 0xC8, 0x07, 0x07,  // 77:200
	0x00, 0xCF, 0x06, 0x07,  // 78:207
	0x00, 0xD5, 0x06, 0x07,  // 79:213
	0x00, 0xDB, 0x06, 0x06,  // 80:219
	0x00, 0xE1, 0x07, 0x07,  // 81:225
	0x00, 0xE8, 0x06, 0x07,  // 82:232
	0x00, 0xEE, 0x06, 0x07,  // 83:238
	0x00, 0xF4, 0x06, 0x06,  // 84:244
	0x00, 0xFA, 0x06, 0x07,  // 85:250
	0x01, 0x00, 0x08, 0x08,  // 86:256
	0x01, 0x08, 0x09, 0x09,  // 87:264
	0x01, 0x11, 0x06, 0x07,  // 88:273
	0x01, 0x17, 0x06, 0x06,  // 89:279
	0x01, 0x1D, 0x06, 0x07,  // 90:285
	0x01, 0x23, 0x02, 0x02,  // 91:291
	0x01, 0x25, 0x04, 0x04,  // 92:293
	0x01, 0x29, 0x02, 0x02,  // 93:297
	0xFF, 0xFF, 0x00, 0x00,  // 94:65535
	0x01, 0x2B, 0x06, 0x07,  // 95:299
	0xFF, 0xFF, 0x00, 0x02,  // 96:65535
	0x01, 0x31, 0x05, 0x06,  // 97:305
	0x01, 0x36, 0x05, 0x05,  // 98:310
	0x01, 0x3B, 0x05, 0x06,  // 99:315
	0x01, 0x40, 0x05, 0x05,  // 100:320
	0x01, 0x45, 0x05, 0x06,  // 101:325
	0x01, 0x4A, 0x03, 0x03,  // 102:330
	0x01, 0x4D, 0x05, 0x05,  // 103:333
	0x01, 0x52, 0x05, 0x05,  // 104:338
	0x01, 0x57, 0x01, 0x02,  // 105:343
	0x01, 0x58, 0x02, 0x02,  // 106:344
	0x01, 0x5A, 0x05, 0x05,  // 107:346
	0x01, 0x5F, 0x02, 0x02,  // 108:351
	0x01, 0x61, 0x07, 0x08,  // 109:353
	0x01, 0x68, 0x05, 0x06,  // 110:360
	0x01, 0x6D, 0x05, 0x06,  // 111:365
	0x01, 0x72, 0x05, 0x05,  // 112:370
	0x01, 0x77, 0x05, 0x05,  // 113:375
	0x01, 0x7C, 0x04, 0x04,  // 114:380
	0x01, 0x80, 0x05, 0x05,  // 115:384
	0x01, 0x85, 0x03, 0x03,  // 116:389
	0x01, 0x88, 0x05, 0x06,  // 117:392
	0x01, 0x8D, 0x06, 0x06,  // 118:397
	0x01, 0x93, 0x08, 0x08,  // 119:403
	0x01, 0x9B, 0x05, 0x06,  // 120:411
	0x01, 0xA0, 0x05, 0x05,  // 121:416
	0x01, 0xA5, 0x05, 0x06,  // 122:421
	0x01, 0xAA, 0x02, 0x02,  // 123:426
	0x01, 0xAC, 0x01, 0x02,  // 124:428
	0x01, 0xAD, 0x02, 0x02,  // 125:429
	0x01, 0xAF, 0x03, 0x03,  // 126:431
	0xFF, 0xFF, 0x00, 0x00,  // 127:65535
	0xFF, 0xFF, 0x00, 0x00,  // 128:65535
	0xFF, 0xFF, 0x00, 0x00,  // 129:65535
	0xFF, 0xFF, 0x00, 0x00,  // 130:65535
	0xFF, 0xFF, 0x00, 0x00,  // 131:65535
	0xFF, 0xFF, 0x00, 0x00,  // 132:65535
	0xFF, 0xFF, 0x00, 0x00,  // 133:65535
	0xFF, 0xFF, 0x00, 0x00,  // 134:65535
	0xFF, 0xFF, 0x00, 0x00,  // 135:65535
	0xFF, 0xFF, 0x00, 0x00,  // 136:65535
	0xFF, 0xFF, 0x00, 0x00,  // 137:65535
	0xFF, 0xFF, 0x00, 0x00,  // 138:65535
	0xFF, 0xFF, 0x00, 0x00,  // 139:65535
	0xFF, 0xFF, 0x00, 0x00,  // 140:65535
	0xFF, 0xFF, 0x00, 0x00,  // 141:65535
	0xFF, 0xFF, 0x00, 0x00,  // 142:65535
	0xFF, 0xFF, 0x00, 0x00,  // 143:65535
	0xFF, 0xFF, 0x00, 0x00,  // 144:65535
	0xFF, 0xFF, 0x00, 0x00,  // 145:65535
	0xFF, 0xFF, 0x00, 0x00,  // 146:65535
	0xFF, 0xFF, 0x00, 0x00,  // 147:65535
	0xFF, 0xFF, 0x00, 0x00,  // 148:65535
	0xFF, 0xFF, 0x00, 0x00,  // 149:65535
	0xFF, 0xFF, 0x00, 0x00,  // 150:65535
	0xFF, 0xFF, 0x00, 0x00,  // 151:65535
	0xFF, 0xFF, 0x00, 0x00,  // 152:65535
	0xFF, 0xFF, 0x00, 0x00,  // 153:65535
	0xFF, 0xFF, 0x00, 0x00,  // 154:65535
	0xFF, 0xFF, 0x00, 0x00,  // 155:65535
	0xFF, 0xFF, 0x00, 0x00,  // 156:65535
	0xFF, 0xFF, 0x00, 0x00,  // 157:65535
	0xFF, 0xFF, 0x00, 0x00,  // 158:65535
	0xFF, 0xFF, 0x00, 0x00,  // 159:65535
	0xFF, 0xFF, 0x00, 0x00,  // 160:65535
	0x01, 0xB2, 0x01, 0x02,  // 161:434
	0x01, 0xB3, 0x05, 0x05,  // 162:435
	0x01, 0xB8, 0x06, 0x06,  // 163:440
	0xFF, 0xFF, 0x00, 0x00,  // 164:65535
	0xFF, 0xFF, 0x00, 0x00,  // 165:65535
	0xFF, 0xFF, 0x00, 0x00,  // 166:65535
	0xFF, 0xFF, 0x00, 0x00,  // 167:65535
	0xFF, 0xFF, 0x00, 0x03,  // 168:65535
	0xFF, 0xFF, 0x00, 0x00,  // 169:65535
	0xFF, 0xFF, 0x00, 0x00,  // 170:65535
	0xFF, 0xFF, 0x00, 0x00,  // 171:65535
	0xFF, 0xFF, 0x00, 0x00,  // 172:65535
	0xFF, 0xFF, 0x00, 0x00,  // 173:65535
	0xFF, 0xFF, 0x00, 0x00,  // 174:65535
	0xFF, 0xFF, 0x00, 0x00,  // 175:65535
	0x01, 0xBE, 0x03, 0x04,  // 176:446
	0xFF, 0xFF, 0x00, 0x00,  // 177:65535
	0xFF, 0xFF, 0x00, 0x00,  // 178:65535
	0xFF, 0xFF, 0x00, 0x00,  // 179:65535
	0xFF, 0xFF, 0x00, 0x02,  // 180:65535
	0xFF, 0xFF, 0x00, 0x00,  // 181:65535
	0x01, 0xC1, 0x06, 0x07,  // 182:449
	0xFF, 0xFF, 0x00, 0x00,  // 183:65535
	0x01, 0xC7, 0x01, 0x02,  // 184:455
	0xFF, 0xFF, 0x00, 0x00,  // 185:65535
	0xFF, 0xFF, 0x00, 0x00,  // 186:65535
	0xFF, 0xFF, 0x00, 0x00,  // 187:65535
	0xFF, 0xFF, 0x00, 0x00,  // 188:65535
	0xFF, 0xFF, 0x00, 0x00,  // 189:65535
	0xFF, 0xFF, 0x00, 0x00,  // 190:65535
	0x01, 0xC8, 0x05, 0x05,  // 191:456
	0x01, 0xCD, 0x06, 0x07,  // 192:461
	0x01, 0xD3, 0x06, 0x07,  // 193:467
	0x01, 0xD9, 0x06, 0x07,  // 194:473
	0x01, 0xDF, 0x06, 0x07,  // 195:479
	0x01, 0xE5, 0x06, 0x07,  // 196:485
	0x01, 0xEB, 0x06, 0x07,  // 197:491
	0x01, 0xF1, 0x0B, 0x0B,  // 198:497
	0x01, 0xFC, 0x06, 0x07,  // 199:508
	0x02, 0x02, 0x06, 0x06,  // 200:514
	0x02, 0x08, 0x06, 0x06,  // 201:520
	0x02, 0x0E, 0x06, 0x06,  // 202:526
	0x02, 0x14, 0x06, 0x06,  // 203:532
	0x02, 0x1A, 0x01, 0x02,  // 204:538
	0x02, 0x1B, 0x01, 0x02,  // 205:539
	0x02, 0x1C, 0x01, 0x02,  // 206:540
	0x02, 0x1D, 0x01, 0x02,  // 207:541
	0xFF, 0xFF, 0x00, 0x00,  // 208:65535
	0x02, 0x1E, 0x06, 0x07,  // 209:542
	0x02, 0x24, 0x06, 0x07,  // 210:548
	0x02, 0x2A, 0x06, 0x07,  // 211:554
	0x02, 0x30, 0x06, 0x07,  // 212:560
	0x02, 0x36, 0x06, 0x07,  // 213:566
	0x02, 0x3C, 0x06, 0x07,  // 214:572
	0x02, 0x42, 0x04, 0x04,  // 215:578
	0xFF, 0xFF, 0x00, 0x00,  // 216:65535
	0x02, 0x46, 0x06, 0x07,  // 217:582
	0x02, 0x4C, 0x06, 0x07,  // 218:588
	0x02, 0x52, 0x06, 0x07,  // 219:594
	0x02, 0x58, 0x06, 0x07,  // 220:600
	0x02, 0x5E, 0x06, 0x06,  // 221:606
	0xFF, 0xFF, 0x00, 0x00,  // 222:65535
	0x02, 0x64, 0x06, 0x07,  // 223:612
	0x02, 0x6A, 0x05, 0x06,  // 224:618
	0x02, 0x6F, 0x05, 0x06,  // 225:623
	0x02, 0x74, 0x05, 0x06,  // 226:628
	0x02, 0x79, 0x05, 0x06,  // 227:633
	0x02, 0x7E, 0x05, 0x06,  // 228:638
	0x02, 0x83, 0x05, 0x06,  // 229:643
	0x02, 0x88, 0x09, 0x09,  // 230:648
	0x02, 0x91, 0x05, 0x06,  // 231:657
	0x02, 0x96, 0x05, 0x05,  // 232:662
	0x02, 0x9B, 0x05, 0x05,  // 233:667
	0x02, 0xA0, 0x05, 0x05,  // 234:672
	0x02, 0xA5, 0x05, 0x05,  // 235:677
	0x02, 0xAA, 0x01, 0x02,  // 236:682
	0x02, 0xAB, 0x01, 0x02,  // 237:683
	0x02, 0xAC, 0x01, 0x02,  // 238:684
	0x02, 0xAD, 0x01, 0x02,  // 239:685
	0xFF, 0xFF, 0x00, 0x00,  // 240:65535
	0x02, 0xAE, 0x05, 0x06,  // 241:686
	0x02, 0xB3, 0x05, 0x06,  // 242:691
	0x02, 0xB8, 0x05, 0x06,  // 243:696
	0x02, 0xBD, 0x05, 0x06,  // 244:701
	0x02, 0xC2, 0x05, 0x06,  // 245:706
	0x02, 0xC7, 0x05, 0x06,  // 246:711
	0x02, 0xCC, 0x04, 0x04,  // 247:716
	0xFF, 0xFF, 0x00, 0x00,  // 248:65535
	0x02, 0xD0, 0x05, 0x06,  // 249:720
	0x02, 0xD5, 0x05, 0x06,  // 250:725
	0x02, 0xDA, 0x05, 0x06,  // 251:730
	0x02, 0xDF, 0x05, 0x06,  // 252:735
	0x02, 0xE4, 0x05, 0x06,  // 253:740
	0xFF, 0xFF, 0x00, 0x00,  // 254:65535
	0x02, 0xE9, 0x05, 0x06,  // 255:745

	// Font Data:
	0x2F,	// 33
	0x03,0x00,0x03,	// 34
	0x12,0x3A,0x17,0x32,0x1C,0x13,	// 35
	0x26,0x29,0x29,0x7F,0x29,0x3B,	// 36
	0x02,0x25,0x17,0x08,0x14,0x2A,0x3B,	// 37
	0x18,0x27,0x29,0x29,0x31,0x3B,0x20,	// 38
	0x03,	// 39
	0x1E,0x21,	// 40
	0x21,0x3E,	// 41
	0x02,0x0F,0x0E,0x02,	// 42
	0x08,0x1C,0x08,	// 43
	0x60,	// 44
	0x08,0x08,0x08,0x08,	// 45
	0x20,	// 46
	0x30,0x08,0x04,0x03,	// 47
	0x1E,0x31,0x29,0x2D,0x25,0x3F,	// 48
	0x02,0x03,0x3F,	// 49
	0x3A,0x29,0x29,0x29,0x29,0x2F,	// 50
	0x22,0x29,0x29,0x29,0x29,0x3F,	// 51
	0x18,0x1C,0x16,0x12,0x3F,0x10,	// 52
	0x17,0x29,0x29,0x29,0x29,0x39,	// 53
	0x1E,0x29,0x29,0x29,0x29,0x38,	// 54
	0x01,0x01,0x01,0x01,0x3E,	// 55
	0x1E,0x29,0x29,0x29,0x29,0x3F,	// 56
	0x26,0x29,0x29,0x29,0x29,0x3F,	// 57
	0x22,	// 58
	0x62,	// 59
	0x08,0x14,0x36,	// 60
	0x14,0x14,0x14,0x14,0x14,	// 61
	0x22,0x14,0x14,0x08,	// 62
	0x01,0x29,0x09,0x09,0x0F,	// 63
	0x1E,0x21,0x2D,0x35,0x2D,0x2F,	// 64
	0x3E,0x09,0x09,0x09,0x09,0x3F,	// 65
	0x3F,0x29,0x29,0x29,0x29,0x3F,	// 66
	0x1E,0x21,0x21,0x21,0x21,0x21,	// 67
	0x3F,0x21,0x21,0x21,0x21,0x3F,	// 68
	0x3F,0x29,0x29,0x29,0x29,0x21,	// 69
	0x3F,0x09,0x09,0x09,0x09,0x01,	// 70
	0x1E,0x21,0x21,0x21,0x29,0x3B,	// 71
	0x3F,0x08,0x08,0x08,0x08,0x3F,	// 72
	0x3F,	// 73
	0x30,0x20,0x20,0x20,0x20,0x3F,	// 74
	0x3F,0x08,0x08,0x0C,0x12,0x21,	// 75
	0x3F,0x20,0x20,0x20,0x20,0x20,	// 76
	0x3F,0x03,0x06,0x08,0x04,0x02,0x3F,	// 77
	0x3F,0x03,0x06,0x08,0x10,0x3F,	// 78
	0x1E,0x21,0x21,0x21,0x21,0x3F,	// 79
	0x3F,0x09,0x09,0x09,0x09,0x0F,	// 80
	0x1E,0x21,0x21,0x21,0x21,0x3F,0x20,	// 81
	0x3F,0x09,0x09,0x09,0x19,0x2F,	// 82
	0x26,0x29,0x29,0x29,0x29,0x3B,	// 83
	0x01,0x01,0x01,0x3F,0x01,0x01,	// 84
	0x1F,0x20,0x20,0x20,0x20,0x3F,	// 85
	0x01,0x02,0x0C,0x30,0x30,0x0C,0x02,0x01,	// 86
	0x01,0x0E,0x30,0x1C,0x03,0x0E,0x30,0x1C,0x03,	// 87
	0x21,0x23,0x1C,0x0C,0x12,0x21,	// 88
	0x01,0x02,0x04,0x38,0x06,0x01,	// 89
	0x21,0x31,0x29,0x2D,0x25,0x23,	// 90
	0x3F,0x21,	// 91
	0x03,0x04,0x08,0x30,	// 92
	0x21,0x3F,	// 93
	0x40,0x40,0x40,0x40,0x40,0x40,	// 95
	0x1A,0x2A,0x2A,0x2A,0x3E,	// 97
	0x3F,0x22,0x22,0x22,0x3E,	// 98
	0x1C,0x22,0x22,0x22,0x22,	// 99
	0x3C,0x22,0x22,0x22,0x3F,	// 100
	0x1C,0x2A,0x2A,0x2A,0x2E,	// 101
	0x3F,0x03,0x03,	// 102
	0x3C,0xA2,0xA2,0xA2,0xFE,	// 103
	0x3F,0x02,0x02,0x02,0x3E,	// 104
	0x3F,	// 105
	0x80,0x7F,	// 106
	0x3F,0x08,0x08,0x14,0x22,	// 107
	0x1F,0x20,	// 108
	0x3E,0x02,0x02,0x3E,0x02,0x02,0x3E,	// 109
	0x3E,0x02,0x02,0x02,0x3E,	// 110
	0x1C,0x22,0x22,0x22,0x3E,	// 111
	0xFE,0x22,0x22,0x22,0x3E,	// 112
	0x3C,0x22,0x22,0x22,0xFE,	// 113
	0x3C,0x02,0x02,0x02,	// 114
	0x2C,0x2A,0x2A,0x2A,0x3E,	// 115
	0x1F,0x22,0x22,	// 116
	0x1E,0x20,0x20,0x20,0x3E,	// 117
	0x02,0x0C,0x30,0x30,0x08,0x06,	// 118
	0x02,0x0C,0x30,0x0C,0x06,0x18,0x30,0x0E,	// 119
	0x22,0x36,0x18,0x14,0x22,	// 120
	0x3E,0xA0,0xA0,0xA0,0xFE,	// 121
	0x22,0x32,0x2A,0x2A,0x26,	// 122
	0x1E,0x21,	// 123
	0x7F,	// 124
	0x21,0x3E,	// 125
	0x08,0x08,0x08,	// 126
	0x3D,	// 161
	0x3C,0x22,0x7F,0x22,0x22,	// 162
	0x28,0x3F,0x29,0x29,0x29,0x22,	// 163
	0x02,0x05,0x07,	// 176
	0x06,0x09,0x09,0x09,0x3F,0x3F,	// 182
	0x40,	// 184
	0x38,0x24,0x24,0x25,0x20,	// 191
	0x3E,0x09,0x09,0x09,0x09,0x3F,	// 192
	0x3E,0x09,0x09,0x09,0x09,0x3F,	// 193
	0x3E,0x09,0x09,0x09,0x09,0x3F,	// 194
	0x3E,0x09,0x09,0x09,0x09,0x3F,	// 195
	0x3E,0x09,0x09,0x09,0x09,0x3F,	// 196
	0x3E,0x09,0x09,0x09,0x09,0x3F,	// 197
	0x3E,0x09,0x09,0x09,0x09,0x3F,0x29,0x29,0x29,0x29,0x21,	// 198
	0x1E,0x21,0x21,0x61,0x21,0x21,	// 199
	0x3F,0x29,0x29,0x29,0x29,0x21,	// 200
	0x3F,0x29,0x29,0x29,0x29,0x21,	// 201
	0x3F,0x29,0x29,0x29,0x29,0x21,	// 202
	0x3F,0x29,0x29,0x29,0x29,0x21,	// 203
	0x3F,	// 204
	0x3F,	// 205
	0x3F,	// 206
	0x3F,	// 207
	0x3F,0x03,0x06,0x08,0x10,0x3F,	// 209
	0x1E,0x21,0x21,0x21,0x21,0x3F,	// 210
	0x1E,0x21,0x21,0x21,0x21,0x3F,	// 211
	0x1E,0x21,0x21,0x21,0x21,0x3F,	// 212
	0x1E,0x21,0x21,0x21,0x21,0x3F,	// 213
	0x1E,0x21,0x21,0x21,0x21,0x3F,	// 214
	0x14,0x14,0x1C,0x14,	// 215
	0x1F,0x20,0x20,0x20,0x20,0x3F,	// 217
	0x1F,0x20,0x20,0x20,0x20,0x3F,	// 218
	0x1F,0x20,0x20,0x20,0x20,0x3F,	// 219
	0x1F,0x20,0x20,0x20,0x20,0x3F,	// 220
	0x01,0x02,0x04,0x38,0x06,0x01,	// 221
	0x3E,0x01,0x29,0x29,0x29,0x3F,	// 223
	0x1A,0x2A,0x2A,0x2A,0x3E,	// 224
	0x1A,0x2A,0x2A,0x2A,0x3E,	// 225
	0x1A,0x2A,0x2A,0x2A,0x3E,	// 226
	0x1A,0x2A,0x2A,0x2A,0x3E,	// 227
	0x1A,0x2A,0x2A,0x2A,0x3E,	// 228
	0x1A,0x2A,0x2A,0x2A,0x3E,	// 229
	0x1A,0x2A,0x2A,0x2A,0x3E,0x2A,0x2A,0x2A,0x2C,	// 230
	0x1C,0x22,0x62,0x22,0x22,	// 231
	0x1C,0x2A,0x2A,0x2A,0x2E,	// 232
	0x1C,0x2A,0x2A,0x2A,0x2E,	// 233
	0x1C,0x2A,0x2A,0x2B,0x2E,	// 234
	0x1C,0x2A,0x2A,0x2A,0x2E,	// 235
	0x3E,	// 236
	0x3F,	// 237
	0x3E,	// 238
	0x3E,	// 239
	0x3E,0x02,0x02,0x02,0x3E,	// 241
	0x1C,0x22,0x22,0x22,0x3E,	// 242
	0x1C,0x22,0x22,0x22,0x3E,	// 243
	0x1C,0x22,0x22,0x23,0x3E,	// 244
	0x1C,0x22,0x22,0x22,0x3E,	// 245
	0x1C,0x22,0x22,0x22,0x3E,	// 246
	0x08,0x08,0x2A,0x08,	// 247
	0x1E,0x20,0x20,0x20,0x3E,	// 249
	0x1E,0x20,0x20,0x20,0x3E,	// 250
	0x1E,0x20,0x20,0x21,0x3E,	// 251
	0x1E,0x20,0x20,0x20,0x3E,	// 252
	0x3E,0xA0,0xA0,0xA0,0xFE,	// 253
	0x3E,0xA0,0xA0,0xA0,0xFE	// 255
};

