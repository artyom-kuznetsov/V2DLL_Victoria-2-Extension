// FUN_009f9d50 @ 009f9d50 body=[[009f9d50, 009f9e6a]]


void FUN_009f9d50(void)

{
  int iVar1;
  int in_EAX;
  int *unaff_ESI;
  
  if (*(int *)(in_EAX + 0xc) != 0) {
    if (*(int *)(in_EAX + 0x1c) != 0) {
      (**(code **)(*unaff_ESI + 0x164))();
    }
    if (*(int *)(in_EAX + 8) != 0) {
      (**(code **)(*unaff_ESI + 0x15c))();
    }
    (**(code **)(*unaff_ESI + 400))();
    (**(code **)(*unaff_ESI + 0x1a0))();
    iVar1 = *(int *)(in_EAX + 0x20);
    if (iVar1 == 0) {
      if (*(int *)(in_EAX + 4) != 0) {
        (**(code **)(*unaff_ESI + 0x148))();
        return;
      }
      (**(code **)(*unaff_ESI + 0x144))();
      return;
    }
    if (iVar1 == 1) {
      if (*(int *)(in_EAX + 4) != 0) {
        (**(code **)(*unaff_ESI + 0x148))();
        return;
      }
      (**(code **)(*unaff_ESI + 0x144))();
      return;
    }
    if (iVar1 == 2) {
      if (*(int *)(in_EAX + 4) != 0) {
        (**(code **)(*unaff_ESI + 0x148))();
        return;
      }
      (**(code **)(*unaff_ESI + 0x144))();
    }
  }
  return;
}

