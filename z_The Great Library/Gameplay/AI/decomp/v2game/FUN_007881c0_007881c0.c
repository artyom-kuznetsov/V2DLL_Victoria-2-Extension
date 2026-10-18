// FUN_007881c0 @ 007881c0 body=[[007881c0, 0078827f]]


void FUN_007881c0(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int local_c;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    local_c = (int)piVar5 - (int)param_1;
    do {
      iVar1 = *piVar5;
      if (param_3 == '\0') {
        bVar3 = *(int *)(iVar1 + 0x5c) < *(int *)(*param_1 + 0x5c);
      }
      else {
        bVar3 = *(int *)(*param_1 + 0x5c) < *(int *)(iVar1 + 0x5c);
      }
      piVar4 = piVar5;
      if (bVar3) {
        FID_conflict__memcpy(piVar5 + (1 - (local_c >> 2)),param_1,(local_c >> 2) * 4);
        *param_1 = iVar1;
      }
      else {
        while( true ) {
          iVar2 = piVar4[-1];
          if (param_3 == '\0') {
            bVar3 = *(int *)(iVar1 + 0x5c) < *(int *)(iVar2 + 0x5c);
          }
          else {
            bVar3 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar1 + 0x5c);
          }
          if (!bVar3) break;
          *piVar4 = iVar2;
          piVar4 = piVar4 + -1;
        }
        *piVar4 = iVar1;
      }
      local_c = local_c + 4;
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}

