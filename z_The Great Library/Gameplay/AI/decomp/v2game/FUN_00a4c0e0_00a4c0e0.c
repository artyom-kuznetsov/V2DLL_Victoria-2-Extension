// FUN_00a4c0e0 @ 00a4c0e0 body=[[00a4c0e0, 00a4c204]]


/* WARNING: Removing unreachable block (ram,0x00a4c16d) */
/* WARNING: Removing unreachable block (ram,0x00a4c119) */
/* WARNING: Removing unreachable block (ram,0x00a4c147) */
/* WARNING: Removing unreachable block (ram,0x00a4c199) */

undefined4 * FUN_00a4c0e0(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x70);
  param_1[1] = 0x18d;
  *param_1 = CColor::vftable;
  fVar2 = (float)(((int)uVar1 >> 0x10 & 0xffU) / 0xff);
  param_1[2] = fVar2;
  fVar3 = (float)(((int)uVar1 >> 8 & 0xffU) / 0xff);
  param_1[3] = fVar3;
  fVar4 = (float)((uVar1 & 0xff) / 0xff);
  param_1[4] = fVar4;
  fVar5 = (float)(((int)uVar1 >> 0x18 & 0xffU) / 0xff);
  param_1[5] = fVar5;
  if ((((0.999 < fVar2) && (0.999 < fVar3)) && (0.999 < fVar4)) && (0.999 < fVar5)) {
    *(undefined1 *)(param_1 + 6) = 1;
    return param_1;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}

