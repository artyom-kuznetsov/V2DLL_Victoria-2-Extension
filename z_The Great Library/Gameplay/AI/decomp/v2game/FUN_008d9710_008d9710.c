// FUN_008d9710 @ 008d9710 body=[[008d9710, 008d97f6]]


void FUN_008d9710(int param_1,int param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  int local_14;
  
  if (param_3 == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((char)in_ECX[6] == '\0') {
      if (*(char *)((int)in_ECX + 0x19) == '\0') {
        local_14 = in_ECX[8];
      }
      else {
        local_14 = *(int *)(*(int *)(param_2 + 0x24) + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    if (local_14 == iVar1) {
      cVar2 = (**(code **)(*in_ECX + 0x18))(param_2);
      if (cVar2 == '\0') {
        FUN_0085c0f0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
        if (*(int *)(param_1 + 0x1c) != 3) {
          FUN_0085bc30(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
          FUN_0085bde0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
          return;
        }
        FUN_0085bc30(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
        FUN_0085bde0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
      }
    }
  }
  return;
}

