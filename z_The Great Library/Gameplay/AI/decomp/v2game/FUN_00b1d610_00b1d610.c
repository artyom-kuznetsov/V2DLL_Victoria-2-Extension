// FUN_00b1d610 @ 00b1d610 body=[[00b1d610, 00b1d8a8]]


void FUN_00b1d610(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar2 = *param_1;
  bVar4 = param_1[8] ^ param_1[0xc];
  bVar1 = param_1[4] ^ bVar2;
  bVar3 = param_1[4] ^ bVar4 ^ bVar2;
  *param_1 = ((char)bVar1 >> 7) * -0x1b ^ bVar1 * '\x02' ^ bVar2 ^ bVar3;
  param_1[4] = ((char)(param_1[4] ^ param_1[8]) >> 7) * -0x1b ^ (param_1[4] ^ param_1[8]) * '\x02' ^
               param_1[4] ^ bVar3;
  param_1[8] = ((char)bVar4 >> 7) * -0x1b ^ bVar4 * '\x02' ^ param_1[8] ^ bVar3;
  bVar1 = param_1[1];
  param_1[0xc] = ((char)(param_1[0xc] ^ bVar2) >> 7) * -0x1b ^ (param_1[0xc] ^ bVar2) * '\x02' ^
                 param_1[0xc] ^ bVar3;
  bVar4 = param_1[9] ^ param_1[0xd];
  bVar2 = param_1[5] ^ bVar1;
  bVar3 = param_1[5] ^ bVar4 ^ bVar1;
  param_1[1] = ((char)bVar2 >> 7) * -0x1b ^ bVar2 * '\x02' ^ bVar1 ^ bVar3;
  param_1[5] = ((char)(param_1[5] ^ param_1[9]) >> 7) * -0x1b ^ (param_1[5] ^ param_1[9]) * '\x02' ^
               param_1[5] ^ bVar3;
  param_1[9] = ((char)bVar4 >> 7) * -0x1b ^ bVar4 * '\x02' ^ param_1[9] ^ bVar3;
  bVar2 = param_1[2];
  param_1[0xd] = ((char)(param_1[0xd] ^ bVar1) >> 7) * -0x1b ^ (param_1[0xd] ^ bVar1) * '\x02' ^
                 param_1[0xd] ^ bVar3;
  bVar4 = param_1[10] ^ param_1[0xe];
  bVar1 = param_1[6] ^ bVar2;
  bVar3 = param_1[6] ^ bVar4 ^ bVar2;
  param_1[2] = ((char)bVar1 >> 7) * -0x1b ^ bVar1 * '\x02' ^ bVar2 ^ bVar3;
  param_1[6] = ((char)(param_1[6] ^ param_1[10]) >> 7) * -0x1b ^ (param_1[6] ^ param_1[10]) * '\x02'
               ^ param_1[6] ^ bVar3;
  param_1[10] = ((char)bVar4 >> 7) * -0x1b ^ bVar4 * '\x02' ^ param_1[10] ^ bVar3;
  bVar1 = param_1[3];
  param_1[0xe] = ((char)(param_1[0xe] ^ bVar2) >> 7) * -0x1b ^ (param_1[0xe] ^ bVar2) * '\x02' ^
                 param_1[0xe] ^ bVar3;
  bVar4 = param_1[0xb] ^ param_1[0xf];
  bVar2 = param_1[7] ^ bVar1;
  bVar3 = param_1[7] ^ bVar4 ^ bVar1;
  param_1[3] = ((char)bVar2 >> 7) * -0x1b ^ bVar2 * '\x02' ^ bVar1 ^ bVar3;
  param_1[7] = ((char)(param_1[7] ^ param_1[0xb]) >> 7) * -0x1b ^
               (param_1[7] ^ param_1[0xb]) * '\x02' ^ param_1[7] ^ bVar3;
  param_1[0xb] = ((char)bVar4 >> 7) * -0x1b ^ bVar4 * '\x02' ^ param_1[0xb] ^ bVar3;
  param_1[0xf] = ((char)(param_1[0xf] ^ bVar1) >> 7) * -0x1b ^ (param_1[0xf] ^ bVar1) * '\x02' ^
                 param_1[0xf] ^ bVar3;
  return;
}

