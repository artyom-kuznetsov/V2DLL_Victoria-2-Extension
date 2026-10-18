// FUN_00728720 @ 00728720 body=[[00728720, 00728778]]


void FUN_00728720(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *unaff_ESI;
  
  uVar1 = *unaff_ESI;
  uVar2 = *param_1;
  cVar3 = FUN_007235e0(uVar2);
  if (cVar3 != '\0') {
    *unaff_ESI = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = *param_2;
  uVar2 = *unaff_ESI;
  cVar3 = FUN_007235e0(uVar2);
  if (cVar3 != '\0') {
    *param_2 = uVar2;
    *unaff_ESI = uVar1;
  }
  uVar1 = *param_1;
  uVar2 = *unaff_ESI;
  cVar3 = FUN_007235e0(uVar1);
  if (cVar3 != '\0') {
    *unaff_ESI = uVar1;
    *param_1 = uVar2;
  }
  return;
}

