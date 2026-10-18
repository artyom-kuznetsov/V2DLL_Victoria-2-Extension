// FUN_007d0dc0 @ 007d0dc0 body=[[007d0dc0, 007d0e9f]]


void FUN_007d0dc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *unaff_EDI;
  
  uVar1 = *param_1;
  puVar3 = (uint *)FUN_007c7d90();
  uVar2 = *unaff_EDI;
  puVar4 = (uint *)FUN_007c7d90();
  if (((int)puVar4[1] <= (int)puVar3[1]) &&
     (((int)puVar4[1] < (int)puVar3[1] || (*puVar4 < *puVar3)))) {
    *unaff_EDI = uVar1;
    *param_1 = uVar2;
  }
  uVar1 = *unaff_EDI;
  puVar3 = (uint *)FUN_007c7d90();
  uVar2 = *param_2;
  puVar4 = (uint *)FUN_007c7d90();
  if (((int)puVar4[1] <= (int)puVar3[1]) &&
     (((int)puVar4[1] < (int)puVar3[1] || (*puVar4 < *puVar3)))) {
    *param_2 = uVar1;
    *unaff_EDI = uVar2;
  }
  uVar1 = *param_1;
  puVar3 = (uint *)FUN_007c7d90();
  uVar2 = *unaff_EDI;
  puVar4 = (uint *)FUN_007c7d90();
  if (((int)puVar4[1] <= (int)puVar3[1]) &&
     (((int)puVar4[1] < (int)puVar3[1] || (*puVar4 < *puVar3)))) {
    *unaff_EDI = uVar1;
    *param_1 = uVar2;
  }
  return;
}

