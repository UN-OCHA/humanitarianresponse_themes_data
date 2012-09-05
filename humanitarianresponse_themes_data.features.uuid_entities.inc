<?php
/**
 * @file
 * humanitarianresponse_themes_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_themes_data_uuid_default_entities() {
  $entities = array();

  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f9bbcf04-92b5-24e4-5136-ac88102df71b',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Civil/Military Relations',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Civil/Military Relations',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Civil/Military Relations',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Relations Civiles/Militaires',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/civilmilitary-relations',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f9bbcf04-92b5-24e4-5136-ac88102df71b',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/80db9aaa-1b4d-8f04-7d99-2870f0ac0136',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Disarmament and Demobilization',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disarmament and Demobilization',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disarmament and Demobilization',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Désarmement et Démobilisation',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/disarmament-and-demobilization',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '80db9aaa-1b4d-8f04-7d99-2870f0ac0136',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/86d499af-2e26-75b4-e102-c6424d0e35d2',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Disaster management',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disaster management',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disaster management',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gestion des Désastres',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/disaster-management',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '86d499af-2e26-75b4-e102-c6424d0e35d2',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/0ce02f74-c231-b2a4-95b4-b87c960f7459',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Field coordination',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field coordination',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field coordination',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Coordination sur le Terrain',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/field-coordination',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '0ce02f74-c231-b2a4-95b4-b87c960f7459',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9ded8528-02f2-6f24-399b-1744f92f89cf',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'HIV/AIDS',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'HIV/AIDS',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'HIV/AIDS',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'VIH/SIDA',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/hivaids',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '9ded8528-02f2-6f24-399b-1744f92f89cf',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/90d5e546-2f59-d094-71a9-101b4b9c6051',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Humanitarian Financing',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Financing',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Financing',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Financement Humanitaire',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/humanitarian-financing',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '90d5e546-2f59-d094-71a9-101b4b9c6051',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/486d8ae7-a19b-4723-ba02-b4eea49fdd8a',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Information Management',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information Management',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information Management',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gestion de l\'Information',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/information-management',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '486d8ae7-a19b-4723-ba02-b4eea49fdd8a',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/73baf6f1-1085-2444-15c3-8d0e4a7bfb82',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Internally Displaced People (IDPs)',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Internally Displaced People (IDPs)',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Internally Displaced People (IDPs)',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Déplacés Internes (IDPs)',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/internally-displaced-people-idps',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '73baf6f1-1085-2444-15c3-8d0e4a7bfb82',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8ef00868-67f9-92f4-f906-69eee309a0e9',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Mine Action',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mine Action',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mine Action',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Déminage',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/mine-action',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '8ef00868-67f9-92f4-f906-69eee309a0e9',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/29e0789c-98e3-e394-c9c6-aabeecc42111',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Refugees and Returnees',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Refugees and Returnees',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Refugees and Returnees',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Réfugiés et Rapatriés',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/refugees-and-returnees',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '29e0789c-98e3-e394-c9c6-aabeecc42111',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/eb4e0d7a-5095-a7a4-45c7-3666754f7300',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Safety & Security',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Safety & Security',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Safety & Security',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sûreté & Sécurité',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/safety-security',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'eb4e0d7a-5095-a7a4-45c7-3666754f7300',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/5fc7cc7a-abc6-f724-19cb-6833f011586e',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Sexual and Gender based Violence',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sexual and Gender based Violence',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sexual and Gender based Violence',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Violence Sexuelle et Sexiste',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/sexual-and-gender-based-violence',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '5fc7cc7a-abc6-f724-19cb-6833f011586e',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c05a0554-eff8-e414-d5f1-62eaab8f2c8c',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Technical co-operation with other countries',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Technical co-operation with other countries',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Technical co-operation with other countries',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Coopération Technique avec d\'autres pays',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/technical-co-operation-other-countries',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'c05a0554-eff8-e414-d5f1-62eaab8f2c8c',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dc596d6c-ac04-38e4-21ca-da320758686e',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Other',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Other',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Other',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Autre',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/other',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'dc596d6c-ac04-38e4-21ca-da320758686e',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );

  return $entities;
}
