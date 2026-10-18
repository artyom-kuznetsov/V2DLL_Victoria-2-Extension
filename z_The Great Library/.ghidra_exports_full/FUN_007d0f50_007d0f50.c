// FUN_007d0f50 @ 007d0f50 body=[[007d0f50, 007d0fab]]


void FUN_007d0f50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *unaff_ESI;
  
  uVar1 = *unaff_ESI;
  uVar2 = *param_1;
  cVar3 = FUN_007c6ad0();
  if (cVar3 != '\0') {
    *unaff_ESI = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = *param_2;
  uVar2 = *unaff_ESI;
  cVar3 = FUN_007c6ad0();
  if (cVar3 != '\0') {
    *param_2 = uVar2;
    *unaff_ESI = uVar1;
  }
  uVar1 = *param_1;
  uVar2 = *unaff_ESI;
  cVar3 = FUN_007c6ad0();
  if (cVar3 != '\0') {
    *unaff_ESI = uVar1;
    *param_1 = uVar2;
  }
  return;
}

