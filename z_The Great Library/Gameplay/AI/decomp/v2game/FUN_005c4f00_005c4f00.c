// FUN_005c4f00 @ 005c4f00 body=[[005c4f00, 005c4f6d]]


void FUN_005c4f00(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xb) {
    FUN_00a84990(param_1,in_ECX + 8);
    return;
  }
  if (param_2 != 0x42e) {
    FUN_009a0f40();
    return;
  }
  param_2 = 0;
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_2);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  *(undefined2 *)(in_ECX + 0x18) = (undefined2)param_2;
  return;
}

