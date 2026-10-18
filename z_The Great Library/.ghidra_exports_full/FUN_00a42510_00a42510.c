// FUN_00a42510 @ 00a42510 body=[[00a42510, 00a42614]]


void FUN_00a42510(undefined4 param_1)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(in_EAX + 4) = param_1;
  if (in_ECX == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX + 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -1;
  }
  if ((((iVar1 == -1) || (iVar1 == 0)) || (iVar1 == -1)) || ((iVar1 == 0 || (iVar1 == -1)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1;
    if ((iVar1 != 0) && (iVar1 != -1)) goto LAB_00a42550;
  }
  iVar1 = 0;
LAB_00a42550:
  iVar3 = iVar1;
  if (iVar1 == -1) {
    iVar3 = 0;
  }
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  *(float *)(in_EAX + 8) = **(float **)(iVar1 + 4) - **(float **)(iVar3 + 8);
  if ((iVar2 == 0) || (iVar1 = iVar2, iVar2 == -1)) {
    iVar1 = 0;
  }
  iVar3 = iVar1;
  if (iVar1 == -1) {
    iVar3 = 0;
  }
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  *(float *)(in_EAX + 0xc) =
       *(float *)(*(int *)(iVar1 + 4) + 4) - *(float *)(*(int *)(iVar3 + 8) + 4);
  if ((iVar2 == 0) || (iVar2 == -1)) {
    iVar2 = 0;
  }
  iVar1 = iVar2;
  if (iVar2 == -1) {
    iVar1 = 0;
  }
  if (iVar2 == -1) {
    iVar2 = 0;
  }
  *(float *)(in_EAX + 0x10) =
       *(float *)(*(int *)(iVar2 + 4) + 8) - *(float *)(*(int *)(iVar1 + 8) + 8);
  return;
}

