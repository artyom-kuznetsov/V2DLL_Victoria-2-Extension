// FUN_0068de30 @ 0068de30 body=[[0068de30, 0068de9b]]


int FUN_0068de30(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int in_ECX;
  uint uVar5;
  undefined4 local_8;
  
  iVar3 = *(int *)(in_ECX + 0xc04);
  iVar4 = *(int *)(in_EAX + 0x50);
  piVar2 = (int *)(in_ECX + 0xc00);
  uVar5 = iVar3 - *piVar2 >> 2;
  if ((int)uVar5 <= iVar4) {
    uVar1 = iVar4 + 1;
    local_8 = 0;
    if (uVar5 < uVar1) {
      FUN_0043cb20(piVar2,iVar3,&local_8);
      iVar3 = *piVar2;
      piVar2 = (int *)(iVar3 + iVar4 * 4);
      *piVar2 = *piVar2 + 1;
      return iVar3 + iVar4 * 4;
    }
    if (uVar1 < uVar5) {
      FUN_0054ab90(piVar2,*piVar2 + uVar1 * 4,iVar3);
    }
  }
  iVar3 = *piVar2;
  piVar2 = (int *)(iVar3 + iVar4 * 4);
  *piVar2 = *piVar2 + 1;
  return iVar3 + iVar4 * 4;
}

