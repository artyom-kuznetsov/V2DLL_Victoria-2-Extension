// FUN_00a825a0 @ 00a825a0 body=[[00a825a0, 00a82731]]


void FUN_00a825a0(int param_1)

{
  double dVar1;
  int in_ECX;
  undefined4 uVar2;
  float10 fVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uStack_ec;
  int *piVar9;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  int iStack_88;
  undefined4 *puStack_84;
  undefined4 local_74 [28];
  
  uVar2 = 0;
  if (param_1 == 0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x14c);
  }
  piStack_8c = *(int **)(in_ECX + 0x180);
  puStack_84 = local_74;
  local_74[0] = 0;
  iStack_88 = param_1;
  uStack_90 = 0xa825d9;
  (**(code **)(*piStack_8c + 0x2c))();
  piStack_98 = *(int **)(in_ECX + 0x180);
  uStack_9c = 0xa825ed;
  uStack_94 = uVar2;
  (**(code **)(*piStack_98 + 0x40))();
  piStack_a4 = *(int **)(in_ECX + 0x180);
  uStack_9c = 1;
  uStack_a0 = uVar2;
  (**(code **)(*piStack_a4 + 0x58))();
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x50))(*(int **)(in_ECX + 0x180),uVar2,DAT_00f092fc);
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x4c))(*(int **)(in_ECX + 0x180),uVar2,DAT_00f092fc);
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x84))(*(int **)(in_ECX + 0x180),uVar2);
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x60))(*(int **)(in_ECX + 0x180),uVar2,&piStack_a4);
  piVar7 = *(int **)(in_ECX + 0x180);
  piVar5 = (int *)0x0;
  (**(code **)(*piVar7 + 0x54))(piVar7,uVar2,0,0);
  piVar6 = *(int **)(in_ECX + 0x180);
  fVar3 = (float10)(**(code **)(*piVar6 + 0x3c))();
  uVar8 = SUB84((double)fVar3,0);
  piVar9 = piVar5;
  fVar3 = (float10)(**(code **)(*piVar5 + 0x10))();
  dVar1 = (double)(fVar3 + (float10)(double)CONCAT44(uVar8,piVar9));
  uStack_ec = (undefined4)((ulonglong)dVar1 >> 0x20);
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x78))(*(int **)(in_ECX + 0x180),uVar2,0,SUB84(dVar1,0))
  ;
  uVar8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x6c))
            (*(int **)(in_ECX + 0x180),uVar2,0,uStack_ec,piVar5,piVar6,piVar7,0);
  uVar4 = CONCAT44(piVar6,piVar5);
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x70))
            (*(int **)(in_ECX + 0x180),uVar2,0,uVar4,CONCAT44(uVar8,piVar7),0);
  (**(code **)(*(int *)uVar4 + 8))((int *)uVar4);
  return;
}

