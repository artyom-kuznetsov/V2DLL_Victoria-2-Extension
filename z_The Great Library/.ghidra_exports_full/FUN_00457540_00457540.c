// FUN_00457540 @ 00457540 body=[[00457540, 0045762d]]


void FUN_00457540(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = param_2[1] - *param_2 >> 0x1f;
  if ((param_2[1] - *param_2) / 0x1c + iVar1 != iVar1) {
    FUN_009a0940(in_EAX);
    FUN_0099fe90(param_3);
    param_1 = 0;
    if (0 < (param_2[1] - *param_2) / 0x1c) {
      do {
        FUN_0099f770(in_EAX,1);
        if (*(char *)(in_EAX + 0xc) == '\0') {
          FUN_004013e0(in_EAX);
        }
        param_1 = param_1 + 1;
      } while (param_1 < (param_2[1] - *param_2) / 0x1c);
    }
    if ((char)param_3 == '\0') {
      *(int *)(in_EAX + 4) = *(int *)(in_EAX + 4) + -1;
      if ((*(char *)(in_EAX + 0xc) == '\0') && (*(int *)(in_EAX + 4) != 0)) {
        FUN_009a08a0(in_EAX,*(int *)(in_EAX + 4) + -1);
      }
      if (*(int *)(in_EAX + 4) == -1) {
        return;
      }
    }
    FUN_004013e0(in_EAX);
    FUN_004013e0(in_EAX);
  }
  return;
}

