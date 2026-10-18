// FUN_0047dbb0 @ 0047dbb0 body=[[0047dbb0, 0047dc16]]


int FUN_0047dbb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FID_conflict__memcpy((void *)(param_1 + 8),(void *)(param_2 + 8),DAT_012587f4);
  iVar4 = *(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48) >> 3;
  FUN_0043a880();
  iVar3 = 1;
  if (1 < iVar4) {
    do {
      iVar1 = *(int *)(param_2 + 0x48);
      iVar2 = *(int *)(param_1 + 0x48);
      *(undefined4 *)(iVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return param_1;
}

