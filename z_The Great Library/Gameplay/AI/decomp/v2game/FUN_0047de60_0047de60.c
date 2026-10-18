// FUN_0047de60 @ 0047de60 body=[[0047de60, 0047de7c] [0047de80, 0047deb5]]


void FUN_0047de60(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 1;
  iVar2 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 3;
  if (1 < iVar2) {
    do {
      plVar1 = (longlong *)(*(int *)(param_1 + 0x48) + iVar3 * 8);
      lVar4 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x48) + iVar3 * 8),
                       *(undefined4 *)((int)plVar1 + 4),param_2,param_3);
      iVar3 = iVar3 + 1;
      *plVar1 = lVar4 >> 0xf;
    } while (iVar3 < iVar2);
  }
  return;
}

