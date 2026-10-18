// FUN_00559a50 @ 00559a50 body=[[00559a50, 00559ab5]]


void FUN_00559a50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *unaff_ESI;
  
  uVar1 = *unaff_ESI;
  uVar2 = *param_1;
  cVar3 = FUN_00522500(&stack0x0000000c);
  if (cVar3 != '\0') {
    *unaff_ESI = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = *param_2;
  uVar2 = *unaff_ESI;
  cVar3 = FUN_00522500(&stack0x0000000c);
  if (cVar3 != '\0') {
    *param_2 = uVar2;
    *unaff_ESI = uVar1;
  }
  uVar1 = *param_1;
  uVar2 = *unaff_ESI;
  cVar3 = FUN_00522500(&stack0x0000000c);
  if (cVar3 != '\0') {
    *unaff_ESI = uVar1;
    *param_1 = uVar2;
  }
  return;
}

