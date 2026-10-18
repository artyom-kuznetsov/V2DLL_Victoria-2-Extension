// FUN_00a44150 @ 00a44150 body=[[00a44150, 00a443ee]]


void FUN_00a44150(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  piVar1 = param_2;
  if (*(int *)(in_ECX + 0x224) != 0) {
    (**(code **)(*param_2 + 0xe8))(param_2,0xe,&local_c);
    (**(code **)(*param_2 + 0xe8))(param_2,0x1b,&local_10);
    (**(code **)(*param_2 + 0xe8))(param_2,0x14,&local_14);
    (**(code **)(*param_2 + 0xe4))(param_2,0xe,0);
    (**(code **)(*param_2 + 0xe4))(param_2,0x1b,1);
    if (*(char *)(in_ECX + 0x167c) == '\0') {
      (**(code **)(*param_2 + 0xe4))(param_2,0x14,2);
    }
    else {
      (**(code **)(*param_2 + 0xe4))(param_2,0x14,4);
    }
    (**(code **)(*param_2 + 0xe4))(param_2,0x9c,1);
    (**(code **)(*param_2 + 0xe4))(param_2,0x9d,1);
    iVar3 = in_stack_0000001c[1] - *in_stack_0000001c;
    iVar2 = iVar3 >> 0x1f;
    uVar4 = DAT_00f092b0;
    if (iVar3 / 0x34 + iVar2 != iVar2) {
      uVar4 = *(undefined4 *)(*in_stack_0000001c + 0x28);
    }
    (**(code **)(*param_2 + 0xe4))(param_2,0x9a,uVar4);
    (**(code **)(*param_2 + 0xe4))(param_2,0x9b,0);
    (**(code **)(*param_2 + 0xe4))(param_2,0x9e,DAT_00f17b54);
    (**(code **)(*param_2 + 0xe4))(param_2,0x9f,DAT_00f17b54);
    (**(code **)(*param_2 + 0xe4))(param_2,0xa0,DAT_00f17b54);
    iVar3 = ((in_stack_0000001c[1] - *in_stack_0000001c) / 0x34) / *(int *)(in_ECX + 0x94);
    (**(code **)(*param_2 + 400))(param_2,0,*(undefined4 *)(in_ECX + 0x224),0,4);
    (**(code **)(*param_2 + 0x164))(param_2,2);
    iVar2 = *(int *)(in_ECX + 0x94);
    param_2 = (int *)0x0;
    if (0 < iVar2) {
      local_8 = 0;
      do {
        (**(code **)(*piVar1 + 0x104))
                  (piVar1,0,*(undefined4 *)
                             (in_ECX + 0x1c0 + (((int)param_2 + in_stack_00000020) % iVar2) * 4));
        iVar2 = local_8;
        (**(code **)(*piVar1 + 0x144))(piVar1,1,local_8,iVar3);
        local_8 = iVar2 + iVar3;
        iVar2 = *(int *)(in_ECX + 0x94);
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < iVar2);
    }
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x9c,0);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x9d,0);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xe,local_c);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x1b,local_10);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x14,local_14);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x9c,0);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x9d,0);
  }
  return;
}

