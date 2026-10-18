// FUN_00596880 @ 00596880 body=[[00596880, 005968c9]]


void FUN_00596880(int param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int *unaff_ESI;
  
  *unaff_ESI = *(int *)(in_ECX + 0x58);
  if ((param_1 != 0) && (in_EAX != 0)) {
    iVar1 = FUN_00598ed0(in_EAX);
    if (iVar1 != 0) {
      *unaff_ESI = *unaff_ESI + *(int *)(iVar1 + 0x58);
    }
  }
  if (*unaff_ESI < 0) {
    *unaff_ESI = 0;
    return;
  }
  if (2000 < *unaff_ESI) {
    *unaff_ESI = 2000;
  }
  return;
}

