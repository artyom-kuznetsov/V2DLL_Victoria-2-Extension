// FUN_00aa7890 @ 00aa7890 body=[[00aa7890, 00aa79d8] [00aa79dc, 00aa7a14]]


void FUN_00aa7890(char *param_1)

{
  uint uVar1;
  char *pcVar2;
  size_t _Size;
  char *pcVar3;
  void *pvVar4;
  int in_ECX;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined **local_1c [3];
  size_t local_10;
  char *local_c;
  undefined4 *local_8;
  
  uVar1 = *(uint *)(in_ECX + 8);
  if ((char *)(0x15555555 - uVar1) < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("deque<T> too long");
  }
  pcVar3 = (char *)(uVar1 >> 1);
  if (pcVar3 < &DAT_00000008) {
    pcVar3 = &DAT_00000008;
  }
  if ((param_1 < pcVar3) && (uVar1 <= 0x15555555U - (int)pcVar3)) {
    param_1 = pcVar3;
  }
  pcVar8 = param_1;
  pcVar2 = *(char **)(in_ECX + 0xc);
  pcVar3 = param_1 + uVar1;
  local_8 = (undefined4 *)0x0;
  local_c = pcVar2;
  if ((pcVar3 != (char *)0x0) &&
     (((char *)0x3fffffff < pcVar3 ||
      (local_8 = (undefined4 *)FUN_00aae9af((int)pcVar3 * 4), local_8 == (undefined4 *)0x0)))) {
    param_1 = (char *)0x0;
    std::exception::exception((exception *)local_1c,&param_1);
    local_1c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_1c,&DAT_00e6fb20);
  }
  iVar6 = (int)pcVar2 * 4;
  pvVar4 = (void *)(iVar6 + *(int *)(in_ECX + 4));
  local_10 = ((*(int *)(in_ECX + 8) * 4 - (int)pvVar4) + *(int *)(in_ECX + 4) >> 2) * 4;
  pvVar4 = FID_conflict__memcpy(local_8 + (int)pcVar2,pvVar4,local_10);
  pvVar4 = (void *)((int)pvVar4 + local_10);
  if (pcVar8 < local_c) {
    FID_conflict__memcpy(pvVar4,*(void **)(in_ECX + 4),((int)pcVar8 * 4 >> 2) * 4);
    pvVar4 = (void *)(*(int *)(in_ECX + 4) + (int)pcVar8 * 4);
    _Size = ((iVar6 - (int)pvVar4) + *(int *)(in_ECX + 4) >> 2) * 4;
    pvVar4 = FID_conflict__memcpy(local_8,pvVar4,_Size);
    puVar7 = (undefined4 *)(_Size + (int)pvVar4);
    pcVar3 = pcVar8;
  }
  else {
    local_10 = (iVar6 >> 2) * 4;
    pvVar4 = FID_conflict__memcpy(pvVar4,*(void **)(in_ECX + 4),local_10);
    puVar5 = (undefined4 *)((int)pvVar4 + local_10);
    iVar6 = (int)pcVar8 - (int)local_c;
    puVar7 = local_8;
    pcVar3 = local_c;
    if (iVar6 != 0) {
      for (; pcVar8 = param_1, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  if (pcVar3 != (char *)0x0) {
    for (; pcVar8 = param_1, pcVar3 != (char *)0x0; pcVar3 = pcVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  if (*(int *)(in_ECX + 4) == 0) {
    *(int *)(in_ECX + 8) = (int)(pcVar8 + *(int *)(in_ECX + 8));
    *(undefined4 **)(in_ECX + 4) = local_8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(in_ECX + 4));
}

