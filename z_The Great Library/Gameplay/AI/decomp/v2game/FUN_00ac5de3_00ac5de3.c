// getArrayType @ 00ac5de3 body=[[00ac5de3, 00ac5fd8]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArrayType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getArrayType(DName *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  DName *pDVar4;
  bool bVar5;
  DName *in_stack_00000008;
  char cVar6;
  DName local_3c [8];
  undefined4 local_34 [2];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_00f20978 == '\0') {
    if (*(int *)in_stack_00000008 != 0) {
      pDVar4 = (DName *)&local_2c;
      pDVar3 = (DName *)DName::DName(local_3c,'(');
      DName::operator+(pDVar3,pDVar4);
      local_1c = local_2c;
      local_18 = local_28;
      DName::operator+=((DName *)&local_1c,")[");
      local_14 = local_1c;
      local_10 = local_18;
      DName::operator+=((DName *)&local_14,1);
      local_c = local_14;
      local_8 = local_10;
      DName::operator+=((DName *)&local_c,']');
      goto LAB_00ac5fc8;
    }
    cVar6 = (char)local_3c;
    puVar2 = local_34;
    pDVar4 = (DName *)&local_2c;
  }
  else {
    local_8 = getNumberOfDimensions();
    if ((int)local_8 < 0) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      local_10 = local_10 & 0xffff0000;
      local_14 = 0;
      if ((*(uint *)(in_stack_00000008 + 4) & 0x800) != 0) {
        DName::operator+=((DName *)&local_14,"[]");
      }
      while ((((char)local_10 < '\x02' &&
              (uVar1 = local_8 - 1, bVar5 = local_8 != 0, local_8 = uVar1, bVar5)) &&
             (*DAT_00f20978 != '\0'))) {
        getDimension(SUB41(local_34,0));
        pDVar4 = (DName *)&local_24;
        pDVar3 = (DName *)DName::DName(local_3c,'[');
        DName::operator+(pDVar3,pDVar4);
        local_1c = local_24;
        local_18 = local_20;
        DName::operator+=((DName *)&local_1c,']');
        DName::operator+=((DName *)&local_14,(DName *)&local_1c);
      }
      if (*(int *)in_stack_00000008 != 0) {
        if ((*(uint *)(in_stack_00000008 + 4) & 0x800) == 0) {
          pDVar4 = (DName *)&local_24;
          pDVar3 = (DName *)DName::DName(local_3c,'(');
          DName::operator+(pDVar3,pDVar4);
          local_c = local_24;
          local_8 = local_20;
          DName::operator+=((DName *)&local_c,')');
          local_1c = local_c;
          local_18 = local_8;
          DName::operator+=((DName *)&local_1c,(DName *)&local_14);
          local_14 = local_1c;
          local_10 = local_18;
        }
        else {
          puVar2 = (undefined4 *)DName::operator+(in_stack_00000008,local_3c);
          local_14 = *puVar2;
          local_10 = puVar2[1];
        }
      }
      getPrimaryDataType((DName *)&local_2c);
      *(undefined4 *)param_1 = local_2c;
      *(uint *)(param_1 + 4) = local_28 | 0x800;
      return param_1;
    }
    cVar6 = (char)&local_2c;
    puVar2 = &local_24;
    pDVar4 = (DName *)&local_1c;
  }
  pDVar4 = (DName *)DName::DName(pDVar4,'[');
  pDVar4 = (DName *)DName::operator+(pDVar4,(DNameStatus)puVar2);
  DName::operator+(pDVar4,cVar6);
LAB_00ac5fc8:
  getBasicDataType(param_1);
  return param_1;
}

