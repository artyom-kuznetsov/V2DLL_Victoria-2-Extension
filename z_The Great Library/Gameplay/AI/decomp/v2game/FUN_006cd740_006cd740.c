// FUN_006cd740 @ 006cd740 body=[[006cd740, 006cd850]]


void FUN_006cd740(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_14;
  undefined4 *local_8;
  
  if (param_1 != param_2) {
    local_8 = param_1;
    while (puVar4 = local_8 + 1, puVar4 != param_2) {
      uVar1 = *puVar4;
      FUN_00491020();
      FUN_00491020();
      cVar2 = FUN_00424660();
      local_14 = puVar4;
      if (cVar2 == '\0') {
        while( true ) {
          FUN_00491020();
          FUN_00491020();
          cVar2 = FUN_00424660();
          if (cVar2 == '\0') break;
          *local_14 = local_14[-1];
          local_14 = local_14 + -1;
        }
        *local_14 = uVar1;
        local_8 = puVar4;
      }
      else {
        iVar3 = (int)puVar4 - (int)param_1 >> 2;
        FID_conflict__memcpy(local_8 + (2 - iVar3),param_1,iVar3 << 2);
        *param_1 = uVar1;
        local_8 = puVar4;
      }
    }
  }
  return;
}

