// FUN_0045d8a0 @ 0045d8a0 body=[[0045d8a0, 0045d8f0]]


void FUN_0045d8a0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x3b6) {
    (**(code **)(*(int *)(in_ECX + 8) + 0xc))(param_1);
    return;
  }
  if ((param_2 == 0x9cc) &&
     (iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x24), iVar1 == 0)) {
    FUN_009a1140();
  }
  return;
}

