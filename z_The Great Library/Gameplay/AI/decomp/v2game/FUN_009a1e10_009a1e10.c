// FUN_009a1e10 @ 009a1e10 body=[[009a1e10, 009a1f38]]


void FUN_009a1e10(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *unaff_EDI;
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
        FID_conflict__sscanf((char *)(*(int *)(in_EAX + 0x1c) + 0x10),"%i",&local_8);
        *unaff_EDI = local_8;
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
              FID_conflict__sscanf((char *)(*(int *)(in_EAX + 0x1c) + 0x10),"%i",&local_8);
              unaff_EDI[1] = local_8;
              iVar1 = (**(code **)(**(int **)(in_EAX + 0x1c) + 4))();
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

