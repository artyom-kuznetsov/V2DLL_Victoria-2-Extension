// FUN_005cbf60 @ 005cbf60 body=[[005cbf60, 005cc153]]


undefined4 FUN_005cbf60(int param_1)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *in_ECX;
  
  if (((((char)in_ECX[0x59] == '\0') && ((char)in_EAX[0x59] == '\0')) && (in_EAX != in_ECX)) &&
     (((in_ECX[0x31] != in_EAX[0x31] && ((char)in_ECX[0x41] == '\0')) &&
      ((char)in_EAX[0x41] == '\0')))) {
    cVar1 = (**(code **)(*in_ECX + 0x38))();
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*in_EAX + 0x38))(), cVar1 == '\0')) {
      return 0;
    }
    cVar1 = (**(code **)(*in_ECX + 0x3c))();
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*in_EAX + 0x3c))(), cVar1 == '\0')) {
      return 0;
    }
    cVar1 = (**(code **)(*in_ECX + 0x40))();
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*in_EAX + 0x40))(), cVar1 == '\0')) {
      return 0;
    }
    cVar1 = (**(code **)(*in_ECX + 0x38))();
    if ((cVar1 == '\0') || (*(char *)(*(int *)(param_1 + 0x5c) + 0x2a) != '\0')) {
      cVar1 = (**(code **)(*in_ECX + 0x38))();
      if ((cVar1 != '\0') &&
         ((in_ECX[0x3b] < 1 &&
          (iVar2 = (**(code **)(*in_ECX + 0x2c))(), *(int *)(iVar2 + 0x1b4) != 0)))) {
        return 0;
      }
      cVar1 = (**(code **)(*in_EAX + 0x38))();
      if (((cVar1 != '\0') && (in_EAX[0x3b] < 1)) &&
         (iVar2 = (**(code **)(*in_EAX + 0x2c))(), *(int *)(iVar2 + 0x1b4) != 0)) {
        return 0;
      }
      cVar1 = FUN_005cc160();
      if (cVar1 != '\0') {
        if ((*(char *)(*(int *)(param_1 + 0x5c) + 0x2a) != '\0') &&
           (cVar1 = (**(code **)(*in_ECX + 0x3c))(), cVar1 != '\0')) {
          return 0;
        }
        iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4);
        if ((in_EAX[0x31] != *(int *)(iVar2 + 0x20)) &&
           ((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + in_EAX[0x31] * 4) + 0x34) != 0 ||
            (((((char)in_EAX[0x30] == 'R' && (*(char *)((int)in_EAX + 0xc1) == 'E')) &&
              (*(char *)((int)in_EAX + 0xc2) == 'B')) ||
             (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
              (*(char *)(iVar2 + 0x1e) == 'B')))))))) {
          return 1;
        }
        if ((*(int *)(param_1 + 300) == 0) &&
           (cVar1 = FUN_005192a0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4)),
           cVar1 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}

