// FUN_009f84c0 @ 009f84c0 body=[[009f84c0, 009f85cd]]


void FUN_009f84c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0xc9:
    FUN_009a1c10();
    return;
  case 0xca:
    FUN_009a1750(in_ECX + 0x40,0);
    return;
  case 0xcb:
    FUN_009a1750(in_ECX + 8,0);
    return;
  case 0xcc:
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_1);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    break;
  case 0xcd:
    FUN_009a1c70();
    return;
  case 0xce:
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_1);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    *(int *)(in_ECX + 0x6c) = param_1;
    return;
  default:
    FUN_009a0f40();
    return;
  case 0xd9:
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_1);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    *(int *)(in_ECX + 0x60) = param_1;
    return;
  }
  *(int *)(in_ECX + 100) = param_1;
  return;
}

