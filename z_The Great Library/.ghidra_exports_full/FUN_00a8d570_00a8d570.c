// FUN_00a8d570 @ 00a8d570 body=[[00a8d570, 00a8d637] [00a8d640, 00a8d68c]]


void FUN_00a8d570(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  
  FUN_00a8d400(in_ECX);
  iVar4 = 0;
  iVar5 = 0;
  local_10 = 0;
  for (piVar2 = *(int **)(in_ECX + 4);
      (*(int **)(in_ECX + 4) <= piVar2 && (piVar2 < *(int **)(in_ECX + 8))); piVar2 = piVar2 + 6) {
    iVar1 = *piVar2;
    iVar5 = iVar5 + iVar1;
    iVar4 = iVar4 + (iVar1 - piVar2[1]);
    local_10 = local_10 + (piVar2[2] - iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x14);
  if (iVar1 < iVar5) {
    iVar6 = iVar5 - iVar1;
    if (iVar4 <= iVar5 - iVar1) {
      iVar6 = iVar4;
    }
    if (0 < iVar6) {
      do {
        for (piVar2 = *(int **)(in_ECX + 4);
            (*(int **)(in_ECX + 4) <= piVar2 && (piVar2 < *(int **)(in_ECX + 8)));
            piVar2 = piVar2 + 6) {
          iVar4 = piVar2[3];
          if ((piVar2[1] + iVar4 <= *piVar2) && (0 < iVar6)) {
            *piVar2 = *piVar2 - iVar4;
            iVar6 = iVar6 - iVar4;
          }
        }
      } while (0 < iVar6);
      return;
    }
  }
  else if (iVar5 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (local_10 <= iVar1 - iVar5) {
      iVar4 = local_10;
    }
    while (0 < iVar4) {
      piVar3 = *(int **)(in_ECX + 4);
      piVar2 = piVar3 + 3;
      for (; (*(int **)(in_ECX + 4) <= piVar3 && (piVar3 < *(int **)(in_ECX + 8)));
          piVar3 = piVar3 + 6) {
        iVar5 = *piVar2;
        if ((*piVar3 <= piVar2[-1] - iVar5) && (0 < iVar4)) {
          *piVar3 = *piVar3 + iVar5;
          iVar4 = iVar4 - iVar5;
        }
        piVar2 = piVar2 + 6;
      }
    }
  }
  return;
}

