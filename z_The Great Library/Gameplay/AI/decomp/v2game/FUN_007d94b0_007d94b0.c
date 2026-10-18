// FUN_007d94b0 @ 007d94b0 body=[[007d94b0, 007d95a8]]


void FUN_007d94b0(int *param_1)

{
  int iVar1;
  int *in_EAX;
  int *in_ECX;
  int iVar2;
  
  iVar2 = *in_EAX;
  if (iVar2 < *in_ECX) {
LAB_007d94e6:
    if (in_EAX != in_ECX) {
      *in_EAX = *in_ECX;
      *in_ECX = iVar2;
      iVar2 = in_EAX[1];
      iVar1 = in_EAX[2];
      in_EAX[1] = in_ECX[1];
      *(char *)(in_EAX + 2) = (char)in_ECX[2];
      in_ECX[1] = iVar2;
      *(char *)(in_ECX + 2) = (char)iVar1;
    }
  }
  else if (iVar2 <= *in_ECX) {
    if ((((char)in_EAX[2] != '\0') && ((char)in_ECX[2] == '\0')) ||
       (((char)in_EAX[2] == (char)in_ECX[2] && (in_EAX + 1 < in_ECX + 1)))) {
      iVar2 = *in_EAX;
      goto LAB_007d94e6;
    }
  }
  iVar2 = *param_1;
  if (*in_EAX <= iVar2) {
    if (*in_EAX < iVar2) goto LAB_007d9557;
    if ((((char)param_1[2] == '\0') || ((char)in_EAX[2] != '\0')) &&
       (((char)param_1[2] != (char)in_EAX[2] || (in_EAX + 1 <= param_1 + 1)))) goto LAB_007d9557;
    iVar2 = *param_1;
  }
  if (param_1 != in_EAX) {
    *param_1 = *in_EAX;
    *in_EAX = iVar2;
    iVar2 = param_1[1];
    iVar1 = param_1[2];
    param_1[1] = in_EAX[1];
    *(char *)(param_1 + 2) = (char)in_EAX[2];
    in_EAX[1] = iVar2;
    *(char *)(in_EAX + 2) = (char)iVar1;
  }
LAB_007d9557:
  iVar2 = *in_EAX;
  if (*in_ECX <= iVar2) {
    if (*in_ECX < iVar2) {
      return;
    }
    if (((char)in_EAX[2] == '\0') || ((char)in_ECX[2] != '\0')) {
      if ((char)in_EAX[2] != (char)in_ECX[2]) {
        return;
      }
      if (in_ECX + 1 <= in_EAX + 1) {
        return;
      }
    }
  }
  if (in_EAX != in_ECX) {
    *in_EAX = *in_ECX;
    *in_ECX = iVar2;
    iVar2 = in_EAX[1];
    iVar1 = in_EAX[2];
    in_EAX[1] = in_ECX[1];
    *(char *)(in_EAX + 2) = (char)in_ECX[2];
    in_ECX[1] = iVar2;
    *(char *)(in_ECX + 2) = (char)iVar1;
  }
  return;
}

