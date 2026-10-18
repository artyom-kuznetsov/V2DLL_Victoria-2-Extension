// FUN_00557c90 @ 00557c90 body=[[00557c90, 00557d76]]


void FUN_00557c90(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *unaff_EDI;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*unaff_EDI;
  cVar3 = (**(code **)(*piVar2 + 0x38))();
  if (cVar3 == '\0') {
    iVar4 = FUN_005cd540();
  }
  else {
    iVar4 = piVar2[0x10];
  }
  cVar3 = (**(code **)(*piVar1 + 0x38))();
  if (cVar3 == '\0') {
    iVar5 = FUN_005cd540();
  }
  else {
    iVar5 = piVar1[0x10];
  }
  if (iVar5 < iVar4) {
    iVar4 = *unaff_EDI;
    *unaff_EDI = *param_1;
    *param_1 = iVar4;
  }
  piVar1 = (int *)*param_2;
  piVar2 = (int *)*unaff_EDI;
  cVar3 = (**(code **)(*piVar1 + 0x38))();
  if (cVar3 == '\0') {
    iVar4 = FUN_005cd540();
  }
  else {
    iVar4 = piVar1[0x10];
  }
  cVar3 = (**(code **)(*piVar2 + 0x38))();
  if (cVar3 == '\0') {
    iVar5 = FUN_005cd540();
  }
  else {
    iVar5 = piVar2[0x10];
  }
  if (iVar5 < iVar4) {
    iVar4 = *param_2;
    *param_2 = *unaff_EDI;
    *unaff_EDI = iVar4;
  }
  piVar1 = (int *)*unaff_EDI;
  piVar2 = (int *)*param_1;
  cVar3 = (**(code **)(*piVar1 + 0x38))();
  if (cVar3 == '\0') {
    iVar4 = FUN_005cd540();
  }
  else {
    iVar4 = piVar1[0x10];
  }
  cVar3 = (**(code **)(*piVar2 + 0x38))();
  if (cVar3 == '\0') {
    iVar5 = FUN_005cd540();
  }
  else {
    iVar5 = piVar2[0x10];
  }
  if (iVar5 < iVar4) {
    iVar4 = *unaff_EDI;
    *unaff_EDI = *param_1;
    *param_1 = iVar4;
  }
  return;
}

