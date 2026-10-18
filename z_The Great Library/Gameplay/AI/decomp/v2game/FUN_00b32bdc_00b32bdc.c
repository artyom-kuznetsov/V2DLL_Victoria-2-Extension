// ___libm_error_support @ 00b32bdc body=[[00b32bdc, 00b32e72]]


/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2010 Release */

void ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = 0;
  if (DAT_00f20bf4 == 0) {
    pcVar1 = FUN_00ab5d96;
  }
  else {
    pcVar1 = DecodePointer(Ptr_013f3ab4);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_00b32c72:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        piVar3 = __errno();
        *piVar3 = 0x22;
      }
    }
    else {
      if (0x19 < param_4) {
        if (param_4 == 0x1a) {
          *param_3 = 1.0;
          return;
        }
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_00b32dc9_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_00b32dc9_caseD_3f1;
            }
            goto switchD_00b32dc9_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_00b32d74;
        }
        local_2c = 2;
LAB_00b32c6b:
        local_28 = "pow";
        goto LAB_00b32c72;
      }
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_00b32cf8;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_00b32cf8;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_00b32c6b;
              }
              local_28 = "exp";
              goto LAB_00b32cb0;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_00b32c72;
      }
      local_28 = "pow";
LAB_00b32cb0:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      local_2c = 4;
      (*pcVar1)(&local_2c);
    }
    goto LAB_00b32e6b;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_00b32dc9_caseD_3ee:
    local_28 = "pow";
    goto LAB_00b32cf8;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_00b32dc9_caseD_3f0:
    local_28 = "acos";
    goto LAB_00b32cf8;
  case 0x3f1:
switchD_00b32dc9_caseD_3f1:
    local_28 = "asin";
    goto LAB_00b32cf8;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_00b32e31;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_00b32e31;
  case 0x3f4:
    local_28 = "tan";
LAB_00b32e31:
    local_14 = *param_1 * (double)CONCAT44(uStack_8,local_c);
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_00b32e4b;
  default:
    goto switchD_00b32dc9_default;
  }
LAB_00b32d74:
  *param_3 = *param_1;
LAB_00b32cf8:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_00b32e4b:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0x21;
  }
LAB_00b32e6b:
  *param_3 = local_14;
switchD_00b32dc9_default:
  return;
}

