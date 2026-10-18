// FUN_00a7c960 @ 00a7c960 body=[[00a7c960, 00a7cc0d]]


int FUN_00a7c960(char *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_EAX;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  int in_ECX;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  
  piVar1 = (int *)(in_ECX + 0x40);
  FUN_00a7d600();
  _strncpy((char *)(*piVar1 + -0x1c + ((*(int *)(in_ECX + 0x44) - *piVar1) / 0x1c) * 0x1c),param_1,
           0x10);
  *(int *)(*piVar1 + -8 + ((*(int *)(in_ECX + 0x44) - *piVar1) / 0x1c) * 0x1c) = in_EAX;
  iVar8 = *(int *)(in_ECX + 0x44);
  if (in_EAX < 2) {
    iVar3 = *piVar1;
    if (in_EAX == 1) {
      *(undefined4 *)(iVar3 + -0xc + ((iVar8 - iVar3) / 0x1c) * 0x1c) = 4;
      pcVar6 = (char *)*param_2;
      pcVar7 = pcVar6 + 1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar8 = *piVar1;
      pvVar5 = _malloc((size_t)(pcVar6 + (1 - (int)pcVar7)));
      *(void **)(iVar8 + -4 + ((*(int *)(in_ECX + 0x44) - iVar8) / 0x1c) * 0x1c) = pvVar5;
      _strncpy(*(char **)(*piVar1 + -4 + ((*(int *)(in_ECX + 0x44) - *piVar1) / 0x1c) * 0x1c),
               (char *)*param_2,(size_t)(pcVar6 + (1 - (int)pcVar7)));
    }
    else {
      *(undefined4 *)(iVar3 + -0xc + ((iVar8 - iVar3) / 0x1c) * 0x1c) = 4;
      *(undefined4 *)(*piVar1 + -4 + ((*(int *)(in_ECX + 0x44) - *piVar1) / 0x1c) * 0x1c) = 0;
    }
  }
  else {
    *(undefined4 *)(*piVar1 + -0xc + ((iVar8 - *piVar1) / 0x1c) * 0x1c) = 5;
    pcVar7 = (char *)0x0;
    iVar8 = 0;
    if (0 < in_EAX) {
      do {
        pcVar4 = (char *)param_2[iVar8];
        pcVar6 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        iVar8 = iVar8 + 1;
        pcVar7 = pcVar4 + (int)(pcVar7 + (1 - (int)pcVar6));
      } while (iVar8 < in_EAX);
    }
    iVar8 = *piVar1;
    pvVar5 = _malloc((size_t)(pcVar7 + in_EAX * 4));
    *(void **)(iVar8 + -4 + ((*(int *)(in_ECX + 0x44) - iVar8) / 0x1c) * 0x1c) = pvVar5;
    iVar8 = *(int *)(*piVar1 + -4 + ((*(int *)(in_ECX + 0x44) - *piVar1) / 0x1c) * 0x1c);
    pcVar7 = (char *)(iVar8 + in_EAX * 4);
    if (0 < in_EAX) {
      iVar8 = iVar8 - (int)param_2;
      puVar9 = param_2;
      param_2 = (undefined4 *)in_EAX;
      do {
        pcVar4 = (char *)*puVar9;
        pcVar6 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        *(char **)(iVar8 + (int)puVar9) = pcVar7;
        _strncpy(pcVar7,(char *)*puVar9,(size_t)(pcVar4 + (1 - (int)pcVar6)));
        pcVar7 = pcVar7 + (int)(pcVar4 + (1 - (int)pcVar6));
        puVar9 = puVar9 + 1;
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
    }
  }
  return *piVar1 + -0x1c + ((*(int *)(in_ECX + 0x44) - *piVar1) / 0x1c) * 0x1c;
}

