// FUN_00a250a0 @ 00a250a0 body=[[00a250a0, 00a251af]]


/* WARNING: Removing unreachable block (ram,0x00a2511d) */
/* WARNING: Removing unreachable block (ram,0x00a250cf) */
/* WARNING: Removing unreachable block (ram,0x00a250f6) */
/* WARNING: Removing unreachable block (ram,0x00a25144) */

undefined4 * FUN_00a250a0(undefined4 *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0x3a);
  param_1[1] = 0x18d;
  *param_1 = CColor::vftable;
  fVar2 = (float)(bVar1 / 0xff);
  bVar1 = *(byte *)(in_ECX + 0x39);
  param_1[2] = fVar2;
  fVar3 = (float)(bVar1 / 0xff);
  bVar1 = *(byte *)(in_ECX + 0x38);
  param_1[3] = fVar3;
  fVar4 = (float)(bVar1 / 0xff);
  bVar1 = *(byte *)(in_ECX + 0x3b);
  param_1[4] = fVar4;
  fVar5 = (float)(bVar1 / 0xff);
  param_1[5] = fVar5;
  if ((((0.999 < fVar2) && (0.999 < fVar3)) && (0.999 < fVar4)) && (0.999 < fVar5)) {
    *(undefined1 *)(param_1 + 6) = 1;
    return param_1;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}

