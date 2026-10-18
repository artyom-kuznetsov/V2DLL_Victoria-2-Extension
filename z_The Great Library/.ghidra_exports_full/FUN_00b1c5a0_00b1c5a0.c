// FUN_00b1c5a0 @ 00b1c5a0 body=[[00b1c5a0, 00b1c667]]


uint FUN_00b1c5a0(byte param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 in_ECX;
  byte bVar5;
  
  bVar2 = ((char)param_1 >> 7) * -0x1b;
  bVar3 = param_1 * '\x02' ^ bVar2;
  cVar1 = (char)bVar3 >> 7;
  bVar3 = bVar3 * '\x02';
  bVar4 = cVar1 * -0x1b ^ bVar3;
  bVar5 = ((char)bVar4 >> 7) * -0x1b ^ bVar4 * '\x02';
  return (uint)param_1 * (param_2 & 1) ^
         (uint)(byte)(((char)bVar5 >> 7) * -0x1b ^ bVar5 * '\x02') * (param_2 >> 4 & 1) ^
         ((uint)(ushort)((char)(bVar4 >> 7) * 0x1b) ^
         CONCAT31((int3)((uint)in_ECX >> 8),bVar4 * '\x02')) * (param_2 >> 3 & 1) ^
         ((uint)(ushort)(-cVar1 * 0x1b) ^ (uint)bVar3) * (param_2 >> 2 & 1) ^
         (uint)(byte)(param_1 * '\x02' ^ bVar2) * (param_2 >> 1 & 1);
}

