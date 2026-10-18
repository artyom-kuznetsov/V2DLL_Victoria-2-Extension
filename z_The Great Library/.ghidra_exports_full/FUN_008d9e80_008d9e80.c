// FUN_008d9e80 @ 008d9e80 body=[[008d9e80, 008d9f17]]


void FUN_008d9e80(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  char cVar2;
  int *in_ECX;
  undefined4 uStack_14;
  undefined4 local_10;
  
  if (param_3 == '\0') {
    local_10 = *(undefined4 *)(param_1 + 8);
    if (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0xc)) {
      cVar2 = (**(code **)(*in_ECX + 0x18))(param_2);
      if (cVar2 == '\0') {
        FUN_008d3fb0(&uStack_14);
        uVar1 = local_10;
        FUN_0085c0f0(param_1,uStack_14,local_10);
        if (*(int *)(param_1 + 0x1c) != 3) {
          FUN_0085bc30(param_1,uStack_14,uVar1);
          FUN_0085bde0(param_1,uStack_14,uVar1);
          return;
        }
        FUN_0085bc30(param_1,uStack_14,uVar1);
        FUN_0085bde0(param_1,uStack_14,uVar1);
      }
    }
  }
  return;
}

