// FUN_004d6c00 @ 004d6c00 body=[[004d6c00, 004d6c85]]


void FUN_004d6c00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = FUN_004d3690();
  if (cVar3 != '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  cVar3 = FUN_004d3690();
  if (cVar3 != '\0') {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  cVar3 = FUN_004d3690();
  if (cVar3 != '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return;
}

