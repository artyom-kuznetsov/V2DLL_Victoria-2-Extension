// FUN_0098f620 @ 0098f620 body=[[0098f620, 0098f6bd] [0098f6c1, 0098f785] [0098f789, 0098f7f7]]


void * FUN_0098f620(void *param_1,void *param_2,void *param_3,int param_4,int param_5)

{
  size_t _Size;
  undefined4 *puVar1;
  void *pvVar2;
  int in_EAX;
  int iVar3;
  int local_24;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_4 <= param_5) {
    if ((**(int **)(in_EAX + 0x10) == 0) && (0 < (*(int **)(in_EAX + 0x10))[3])) {
      FUN_0098f1c0();
      **(undefined4 **)(in_EAX + 0x10) = local_10;
      *(undefined4 *)(*(int *)(in_EAX + 0x10) + 4) = local_10;
      *(undefined4 *)(*(int *)(in_EAX + 0x10) + 8) = local_10;
      *(undefined4 *)(*(int *)(in_EAX + 0x10) + 0xc) = local_c;
    }
    puVar1 = *(undefined4 **)(in_EAX + 0x10);
    if (param_4 <= (int)puVar1[3]) {
      puVar1[1] = *puVar1;
      FUN_0098f4a0(param_1);
      if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FID_conflict__memcpy(param_1,param_2,((int)param_3 - (int)param_2 >> 2) * 4);
      pvVar2 = (void *)**(undefined4 **)(in_EAX + 0x10);
      iVar3 = (*(undefined4 **)(in_EAX + 0x10))[1] - (int)pvVar2 >> 2;
      param_3 = (void *)((int)param_3 + iVar3 * -4);
      FID_conflict__memcpy(param_3,pvVar2,iVar3 * 4);
      return param_3;
    }
  }
  if ((**(int **)(in_EAX + 0x10) == 0) && (0 < (*(int **)(in_EAX + 0x10))[3])) {
    FUN_0098f1c0();
    **(undefined4 **)(in_EAX + 0x10) = local_10;
    *(undefined4 *)(*(int *)(in_EAX + 0x10) + 4) = local_10;
    *(undefined4 *)(*(int *)(in_EAX + 0x10) + 8) = local_10;
    *(undefined4 *)(*(int *)(in_EAX + 0x10) + 0xc) = local_c;
  }
  puVar1 = *(undefined4 **)(in_EAX + 0x10);
  if (param_5 <= (int)puVar1[3]) {
    puVar1[1] = *puVar1;
    FUN_0098f4a0(param_2);
    if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar3 = (int)param_2 - (int)param_1 >> 2;
    FID_conflict__memcpy((void *)((int)param_3 + iVar3 * -4),param_1,iVar3 * 4);
    pvVar2 = (void *)**(undefined4 **)(in_EAX + 0x10);
    _Size = ((*(undefined4 **)(in_EAX + 0x10))[1] - (int)pvVar2 >> 2) * 4;
    FID_conflict__memcpy(param_1,pvVar2,_Size);
    return (void *)(_Size + (int)param_1);
  }
  if ((param_1 != param_2) && (param_2 != param_3)) {
    FUN_006a42d0();
  }
  return (void *)((int)param_1 + param_5 * 4);
}

