// FUN_006cd110 @ 006cd110 body=[[006cd110, 006cd200]]


void FUN_006cd110(short *param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *local_14;
  short *local_8;
  
  if (param_1 != param_2) {
    local_8 = param_1;
    while (psVar5 = local_8 + 1, psVar5 != param_2) {
      sVar1 = *psVar5;
      cVar2 = FUN_006bed80((int)sVar1,(int)*param_1);
      local_14 = psVar5;
      if (cVar2 == '\0') {
        while( true ) {
          psVar4 = local_14 + -1;
          cVar2 = FUN_006bed80((int)sVar1,(int)*psVar4);
          if (cVar2 == '\0') break;
          *local_14 = *psVar4;
          local_14 = psVar4;
        }
        *local_14 = sVar1;
        local_8 = psVar5;
      }
      else {
        iVar3 = (int)psVar5 - (int)param_1 >> 1;
        FID_conflict__memcpy(local_8 + (2 - iVar3),param_1,iVar3 << 1);
        *param_1 = sVar1;
        local_8 = psVar5;
      }
    }
  }
  return;
}

