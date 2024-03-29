/* libutil.h generated by valac 0.24.0, the Vala compiler, do not modify */


#ifndef __LIBUTIL_H__
#define __LIBUTIL_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <ibus.h>
#include <json-glib/json-glib.h>

G_BEGIN_DECLS


#define TYPE_PREFERENCES (preferences_get_type ())
#define PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PREFERENCES, Preferences))
#define PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PREFERENCES, PreferencesClass))
#define IS_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PREFERENCES))
#define IS_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PREFERENCES))
#define PREFERENCES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PREFERENCES, PreferencesClass))

typedef struct _Preferences Preferences;
typedef struct _PreferencesClass PreferencesClass;
typedef struct _PreferencesPrivate PreferencesPrivate;

#define TYPE_DICTIONARY_METADATA (dictionary_metadata_get_type ())
#define DICTIONARY_METADATA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DICTIONARY_METADATA, DictionaryMetadata))
#define DICTIONARY_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DICTIONARY_METADATA, DictionaryMetadataClass))
#define IS_DICTIONARY_METADATA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DICTIONARY_METADATA))
#define IS_DICTIONARY_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DICTIONARY_METADATA))
#define DICTIONARY_METADATA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DICTIONARY_METADATA, DictionaryMetadataClass))

typedef struct _DictionaryMetadata DictionaryMetadata;
typedef struct _DictionaryMetadataClass DictionaryMetadataClass;
typedef struct _DictionaryMetadataPrivate DictionaryMetadataPrivate;

#define TYPE_DICTIONARY_REGISTRY (dictionary_registry_get_type ())
#define DICTIONARY_REGISTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DICTIONARY_REGISTRY, DictionaryRegistry))
#define DICTIONARY_REGISTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DICTIONARY_REGISTRY, DictionaryRegistryClass))
#define IS_DICTIONARY_REGISTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DICTIONARY_REGISTRY))
#define IS_DICTIONARY_REGISTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DICTIONARY_REGISTRY))
#define DICTIONARY_REGISTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DICTIONARY_REGISTRY, DictionaryRegistryClass))

typedef struct _DictionaryRegistry DictionaryRegistry;
typedef struct _DictionaryRegistryClass DictionaryRegistryClass;
typedef struct _DictionaryRegistryPrivate DictionaryRegistryPrivate;

struct _Preferences {
	GObject parent_instance;
	PreferencesPrivate * priv;
};

struct _PreferencesClass {
	GObjectClass parent_class;
};

struct _DictionaryMetadata {
	GObject parent_instance;
	DictionaryMetadataPrivate * priv;
};

struct _DictionaryMetadataClass {
	GObjectClass parent_class;
};

struct _DictionaryRegistry {
	GObject parent_instance;
	DictionaryRegistryPrivate * priv;
};

struct _DictionaryRegistryClass {
	GObjectClass parent_class;
};


GType preferences_get_type (void) G_GNUC_CONST;
void preferences_load (Preferences* self);
GType dictionary_metadata_get_type (void) G_GNUC_CONST;
DictionaryMetadata** preferences_list_available_dictionaries (Preferences* self, int* result_length1);
DictionaryMetadata* preferences_get_dictionary_metadata (Preferences* self, const gchar* id);
GVariant* preferences_get (Preferences* self, const gchar* name);
void preferences_set (Preferences* self, const gchar* name, GVariant* value);
Preferences* preferences_new (IBusConfig* config);
Preferences* preferences_construct (GType object_type, IBusConfig* config);
DictionaryMetadata* dictionary_metadata_new_from_json_object (JsonObject* object);
DictionaryMetadata* dictionary_metadata_construct_from_json_object (GType object_type, JsonObject* object);
DictionaryMetadata* dictionary_metadata_new (void);
DictionaryMetadata* dictionary_metadata_construct (GType object_type);
const gchar* dictionary_metadata_get_id (DictionaryMetadata* self);
void dictionary_metadata_set_id (DictionaryMetadata* self, const gchar* value);
const gchar* dictionary_metadata_get_filename (DictionaryMetadata* self);
void dictionary_metadata_set_filename (DictionaryMetadata* self, const gchar* value);
const gchar* dictionary_metadata_get_name (DictionaryMetadata* self);
void dictionary_metadata_set_name (DictionaryMetadata* self, const gchar* value);
const gchar* dictionary_metadata_get_description (DictionaryMetadata* self);
void dictionary_metadata_set_description (DictionaryMetadata* self, const gchar* value);
const gchar* dictionary_metadata_get_encoding (DictionaryMetadata* self);
void dictionary_metadata_set_encoding (DictionaryMetadata* self, const gchar* value);
gboolean dictionary_metadata_get_default_enabled (DictionaryMetadata* self);
void dictionary_metadata_set_default_enabled (DictionaryMetadata* self, gboolean value);
GType dictionary_registry_get_type (void) G_GNUC_CONST;
DictionaryMetadata** dictionary_registry_list_available (DictionaryRegistry* self, int* result_length1);
DictionaryMetadata* dictionary_registry_get_metadata (DictionaryRegistry* self, const gchar* id);
DictionaryRegistry* dictionary_registry_new (void);
DictionaryRegistry* dictionary_registry_construct (GType object_type);


G_END_DECLS

#endif
