/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_ALTERATION_TYPE_H
#define DF_FEATURE_ALTERATION_TYPE_H
namespace df {
  namespace enums {
    namespace feature_alteration_type {
      enum feature_alteration_type : int32_t {
        new_pop_max,
        new_lava_fill_z
      };
    }
  }
  using enums::feature_alteration_type::feature_alteration_type;
  template<> struct DFHACK_EXPORT identity_traits<feature_alteration_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<feature_alteration_type> {
    typedef int32_t base_type;
    typedef feature_alteration_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 1;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[2];
  };
}
#endif
