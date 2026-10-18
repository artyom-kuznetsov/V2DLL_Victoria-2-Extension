// FUN_0096ba50 @ 0096ba50 body=[[0096ba50, 0096bb35]]


void FUN_0096ba50(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *in_ECX;
  uint *puVar3;
  longlong lVar4;
  int local_1c;
  
  if ((*in_ECX == 0) || (uVar1 = in_ECX[3], uVar1 == 0)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return;
  }
  puVar3 = (uint *)in_ECX[0x33];
  local_1c = in_ECX[0x34] - (int)puVar3 >> 3;
  lVar2 = 0;
  lVar4 = 0;
  if (0 < local_1c) {
    do {
      lVar4 = __alldiv(*puVar3 << 0xf,puVar3[1] << 0xf | *puVar3 >> 0x11,uVar1 << 0xf,uVar1 >> 0x11)
      ;
      lVar2 = lVar4 + lVar2;
      puVar3 = puVar3 + 2;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    lVar4 = lVar2;
    if (lVar2 < 0x100000000) {
      if (lVar2 < 0) {
        *(undefined4 *)param_1 = 0;
        *(undefined4 *)((int)param_1 + 4) = 0;
        return;
      }
      if (lVar2 < 0) goto LAB_0096bb21;
    }
    if ((0xffffffff < lVar2) || (0x8000 < (uint)lVar2)) {
      lVar4 = 0x8000;
    }
  }
LAB_0096bb21:
  *param_1 = lVar4;
  return;
}

