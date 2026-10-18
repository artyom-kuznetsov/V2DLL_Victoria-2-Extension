// FUN_006cc540 @ 006cc540 body=[[006cc540, 006cc636]]


void FUN_006cc540(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_14;
  undefined4 *local_8;
  
  if (param_1 != param_2) {
    local_8 = param_1;
    while (puVar5 = local_8 + 1, puVar5 != param_2) {
      uVar1 = *puVar5;
      cVar2 = FUN_006bee40(uVar1,*param_1);
      local_14 = puVar5;
      if (cVar2 == '\0') {
        while( true ) {
          puVar4 = local_14 + -1;
          cVar2 = FUN_006bee40(uVar1,*puVar4);
          if (cVar2 == '\0') break;
          *local_14 = *puVar4;
          local_14 = puVar4;
        }
        *local_14 = uVar1;
        local_8 = puVar5;
      }
      else {
        iVar3 = (int)puVar5 - (int)param_1 >> 2;
        FID_conflict__memcpy(local_8 + (2 - iVar3),param_1,iVar3 << 2);
        *param_1 = uVar1;
        local_8 = puVar5;
      }
    }
  }
  return;
}

