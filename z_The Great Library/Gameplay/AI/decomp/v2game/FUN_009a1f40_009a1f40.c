// FUN_009a1f40 @ 009a1f40 body=[[009a1f40, 009a206a]]


void FUN_009a1f40(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 local_8;
  
  if (*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 3) {
    FUN_009a1140();
  }
  iVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 4))();
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 0x1f) {
      FUN_009a1140();
    }
    iVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 4))();
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 1) {
        FUN_009a1140();
      }
      iVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 4))();
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 0xc) {
          FUN_009a1140();
        }
        FID_conflict__sscanf((char *)(*(int *)(in_EAX + 0x1c) + 0x10),"%f",&local_8);
        *param_1 = local_8;
        iVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 4))();
        if (iVar1 != 0) {
          if (*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 0x20) {
            FUN_009a1140();
          }
          iVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 4))();
          if (iVar1 != 0) {
            if (*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 1) {
              FUN_009a1140();
            }
            iVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 4))();
            if (iVar1 != 0) {
              if (*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 0xc) {
                FUN_009a1140();
              }
              FUN_0098fc60();
              iVar1 = **(int **)(in_EAX + 0x1c);
              param_1[1] = local_8;
              iVar1 = (**(code **)(iVar1 + 4))();
              if ((iVar1 != 0) && (*(int *)(*(int *)(in_EAX + 0x1c) + 0xc) != 4)) {
                FUN_009a1140();
              }
            }
          }
        }
      }
    }
  }
  return;
}

