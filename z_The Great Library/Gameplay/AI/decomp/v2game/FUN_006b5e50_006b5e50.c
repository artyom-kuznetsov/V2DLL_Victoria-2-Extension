// FUN_006b5e50 @ 006b5e50 body=[[006b5e50, 006b5eae]]


void FUN_006b5e50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *unaff_ESI;
  
  cVar2 = FUN_006a88f0(*param_1);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = FUN_006a88f0(*unaff_ESI);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *unaff_ESI;
    *unaff_ESI = uVar1;
  }
  cVar2 = FUN_006a88f0(*param_1);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *param_1;
    *param_1 = uVar1;
  }
  return;
}

