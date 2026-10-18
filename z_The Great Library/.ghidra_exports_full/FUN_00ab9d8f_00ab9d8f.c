// FUN_00ab9d8f @ 00ab9d8f body=[[00ab9d8f, 00ab9df0]]


void FUN_00ab9d8f(undefined4 param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (((*(byte *)(unaff_EBX + 0xc) & 0x40) == 0) || (*(int *)(unaff_EBX + 8) != 0)) {
    *unaff_EDI = 0;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        write_char();
        if (*in_EAX == -1) {
          if (*unaff_EDI != 0x2a) break;
          write_char();
        }
      } while (0 < param_2);
      if (*unaff_EDI != 0) {
        return;
      }
    }
    *unaff_EDI = iVar1;
  }
  else {
    *in_EAX = *in_EAX + param_2;
  }
  return;
}

