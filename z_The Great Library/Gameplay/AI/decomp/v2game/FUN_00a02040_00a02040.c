// FUN_00a02040 @ 00a02040 body=[[00a02040, 00a0209d]]


void FUN_00a02040(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xd9) {
    param_2 = 0;
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_2);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    *(int *)(in_ECX + 0x74) = param_2;
    return;
  }
  if (param_2 != 0xdc) {
    FUN_00a09cb0(param_1,param_2);
  }
  return;
}

