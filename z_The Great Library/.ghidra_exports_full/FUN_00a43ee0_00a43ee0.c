// FUN_00a43ee0 @ 00a43ee0 body=[[00a43ee0, 00a43f8d]]


int FUN_00a43ee0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 == 0x24) {
    FUN_0045be80(param_1,(int *)(in_ECX + 0x1b0));
    iVar2 = *(int *)(in_ECX + 0x1b4) - *(int *)(in_ECX + 0x1b0);
    iVar1 = iVar2 * -0x6db6db6d;
    *(int *)(in_ECX + 0x94) = iVar2 / 0x1c;
  }
  else {
    if (param_2 != 0x44) {
      iVar1 = FUN_00a20b80(param_1,param_2);
      *(undefined4 *)(in_ECX + 0x1678) = 0xffffffff;
      return iVar1;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&local_8);
    if (iVar1 == 0) {
      iVar1 = FUN_009a1140();
      *(undefined4 *)(in_ECX + 0x1678) = 0xffffffff;
      return iVar1;
    }
  }
  *(undefined4 *)(in_ECX + 0x1678) = 0xffffffff;
  return iVar1;
}

