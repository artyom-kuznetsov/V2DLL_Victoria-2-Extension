// FUN_007d0680 @ 007d0680 body=[[007d0680, 007d06d3]]


void FUN_007d0680(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *unaff_ESI;
  
  uVar1 = *unaff_ESI;
  uVar2 = *param_1;
  cVar3 = FUN_007c6830();
  if (cVar3 != '\0') {
    *unaff_ESI = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = *param_2;
  uVar2 = *unaff_ESI;
  cVar3 = FUN_007c6830();
  if (cVar3 != '\0') {
    *param_2 = uVar2;
    *unaff_ESI = uVar1;
  }
  uVar1 = *unaff_ESI;
  uVar2 = *param_1;
  cVar3 = FUN_007c6830();
  if (cVar3 != '\0') {
    *unaff_ESI = uVar2;
    *param_1 = uVar1;
  }
  return;
}

