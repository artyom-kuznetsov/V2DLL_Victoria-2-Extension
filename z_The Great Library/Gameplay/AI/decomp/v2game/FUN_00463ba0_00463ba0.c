// FUN_00463ba0 @ 00463ba0 body=[[00463ba0, 00463c0e] [00463c10, 00463c90]]


int FUN_00463ba0(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  if (in_EAX != param_1) {
    iVar1 = param_2 + 0x40;
    iVar3 = in_EAX + 0x40;
    do {
      FUN_00408ed0(iVar3 + -0x40,0,0xffffffff);
      FUN_00408ed0(iVar3 + -0x24,0,0xffffffff);
      *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(iVar3 + -4);
      FUN_009beeb0(iVar3);
      *(undefined1 *)(iVar1 + 0x10) = *(undefined1 *)(iVar3 + 0x10);
      *(undefined1 *)(iVar1 + 0x11) = *(undefined1 *)(iVar3 + 0x11);
      iVar2 = iVar1 + 0x14;
      local_c = 3;
      do {
        FUN_00463e10(((iVar3 + -0x40) - param_2) + iVar2);
        iVar2 = iVar2 + 0x10;
        local_c = local_c + -1;
      } while (local_c != 0);
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar3 + 0x48);
      if (iVar1 + 0x4c != iVar3 + 0x4c) {
        FUN_00462440(**(undefined4 **)(iVar1 + 0x50),*(undefined4 **)(iVar1 + 0x50));
        FUN_00464020(iVar3 + 0x4c);
      }
      FUN_009beeb0(iVar3 + 0x5c);
      param_2 = param_2 + 0xac;
      iVar2 = iVar3 + 0x6c;
      iVar1 = iVar1 + 0xac;
      iVar3 = iVar3 + 0xac;
    } while (iVar2 != param_1);
  }
  return param_2;
}

