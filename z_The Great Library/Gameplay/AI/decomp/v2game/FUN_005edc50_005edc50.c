// FUN_005edc50 @ 005edc50 body=[[005edc50, 005edcb2]]


void FUN_005edc50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  int *unaff_EDI;
  
  if (*unaff_EDI < *param_1) {
    piVar3 = *(int **)(in_EAX + 0xc);
    if (piVar3 != (int *)0x0) {
      do {
        piVar1 = (int *)*piVar3;
        iVar2 = piVar1[2];
        piVar3 = (int *)piVar3[2];
        if ((*unaff_EDI < iVar2) && (iVar2 <= *param_1)) {
          (**(code **)(*piVar1 + 0x1c))(1);
        }
      } while (piVar3 != (int *)0x0);
      return;
    }
  }
  else {
    piVar3 = *(int **)(in_EAX + 0x10);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)*piVar3;
      iVar2 = piVar1[2];
      piVar3 = (int *)piVar3[1];
      if ((iVar2 <= *unaff_EDI) && (*param_1 < iVar2)) {
        (**(code **)(*piVar1 + 0x1c))(0);
      }
    }
  }
  return;
}

