// FUN_00a509a0 @ 00a509a0 body=[[00a509a0, 00a50afc]]


float10 FUN_00a509a0(float param_1,float param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int unaff_EBX;
  int unaff_ESI;
  uint uVar5;
  double dVar6;
  float *pfStack_3c;
  double dStack_2c;
  double local_24;
  undefined8 local_18;
  double local_10;
  
  local_18 = 0x41efffffffe00000;
  local_10 = -1.0;
  local_24 = (double)((ulonglong)local_24 & 0xffffffff00000000);
  if (0 < (int)(*(int *)(in_ECX + 0xe8) - *(int *)(in_ECX + 0xe4) & 0xfffffffcU)) {
    do {
      pfVar1 = *(float **)(*(int *)(*(int *)(in_ECX + 0xe4) + local_24._0_4_ * 4) + 4);
      uVar2 = (**(code **)((int)*pfVar1 + 0x20))();
      local_24 = (double)CONCAT44(local_24._4_4_,uVar2);
      (**(code **)((int)*pfVar1 + 0x3c))(pfVar1,0x10,&dStack_2c);
      uVar5 = 0;
      iVar3 = (**(code **)((int)*pfVar1 + 0x14))(pfVar1);
      if (iVar3 != 0) {
        pfStack_3c = pfVar1;
        do {
          dVar6 = ((double)param_1 - (double)*pfStack_3c) * ((double)param_1 - (double)*pfStack_3c)
                  + ((double)param_2 - (double)pfStack_3c[2]) *
                    ((double)param_2 - (double)pfStack_3c[2]);
          if (dVar6 <= dStack_2c) {
            local_24 = (double)pfStack_3c[1];
            dStack_2c = dVar6;
          }
          pfStack_3c = pfStack_3c + ((int)((unaff_ESI >> 0x1f & 3U) + unaff_ESI) >> 2);
          uVar5 = uVar5 + 1;
          uVar4 = (**(code **)((int)*pfVar1 + 0x14))(pfVar1);
          in_ECX = unaff_EBX;
        } while (uVar5 < uVar4);
      }
      (**(code **)((int)*pfVar1 + 0x40))(pfVar1);
      iVar3 = local_24._0_4_ + 1;
      local_24 = (double)CONCAT44(local_24._4_4_,iVar3);
    } while (iVar3 < *(int *)(in_ECX + 0xe8) - *(int *)(in_ECX + 0xe4) >> 2);
  }
  return (float10)(float)local_10;
}

