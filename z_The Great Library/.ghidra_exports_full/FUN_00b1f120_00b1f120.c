// FUN_00b1f120 @ 00b1f120 body=[[00b1f120, 00b1f1e0]]


bool FUN_00b1f120(char *param_1,int param_2)

{
  char cVar1;
  undefined3 uVar2;
  int iVar3;
  FILE *pFVar4;
  char *pcVar5;
  int *in_ECX;
  undefined4 local_4;
  
  local_4 = in_ECX;
  if (in_ECX[4] != 0) {
    (**(code **)(*in_ECX + 100))();
  }
  iVar3 = 0;
  uVar2 = local_4._1_3_;
  if (param_2 == 0) {
    local_4 = (int *)CONCAT31(local_4._1_3_,0x72);
    iVar3 = 1;
  }
  else if (param_2 == 1) {
    local_4 = (int *)CONCAT31(local_4._1_3_,0x77);
    iVar3 = 1;
  }
  else {
    if (param_2 == 2) {
      local_4 = (int *)CONCAT22(local_4._2_2_,0x2b72);
    }
    else if (param_2 == 3) {
      local_4 = (int *)CONCAT22(local_4._2_2_,0x2b77);
    }
    else {
      if (param_2 == 4) {
        local_4 = (int *)CONCAT31(uVar2,0x61);
        iVar3 = 1;
        goto LAB_00b1f191;
      }
      if (param_2 != 5) goto LAB_00b1f191;
      local_4 = (int *)CONCAT22(local_4._2_2_,0x2b61);
    }
    iVar3 = 2;
  }
LAB_00b1f191:
  *(undefined1 *)((int)&local_4 + iVar3) = 0x74;
  *(undefined1 *)((int)&local_4 + iVar3 + 1) = 0;
  pFVar4 = _fopen(param_1,(char *)&local_4);
  in_ECX[4] = (int)pFVar4;
  in_ECX[5] = param_2;
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00b137d0(param_1,(int)pcVar5 - (int)(param_1 + 1));
  return in_ECX[4] != 0;
}

