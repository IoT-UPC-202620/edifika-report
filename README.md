<div align="center">
<p align="center">
  <img src="assets/img/upc_logo.png" alt="logo" width="200"/>
</p>

<h3>Universidad Peruana de Ciencias Aplicadas</h3>
<h3>Ingeniería de Software</h3>

<h4>1ASI0572 - Desarrollo de Soluciones IOT<br>202620</h4>

<h4>NRC: 8740</h4>

<h4>Docente: Verla Olivera, David Carlos</h4>

<h3>Informe de Trabajo Final</h3>

<h4>Nombre del Startup: Condomia</h4>
<h4>Nombre del Producto: Edifika</h4>


<br>

<h4>Integrantes:</h4>

<table style="border-collapse: collapse;">
  <thead>
    <tr>
      <th style="border: 1px solid black;">Alumno</th>
      <th style="border: 1px solid black;">Codigo</th>
    </tr>
  </thead>
  <tbody>
    <tr><td style="border: 1px solid black;">Acuña Corahua, Jonatan Ariel</td><td style="border: 1px solid black;">u20211b995</td></tr>
    <tr><td style="border: 1px solid black;">Collantes Carrillo, Diego Mateo</td><td style="border: 1px solid black;">u202311823</td></tr>
    <tr><td style="border: 1px solid black;">Landa Ortiz, Sergio Javier</td><td style="border: 1px solid black;">u202311086</td></tr>
	<tr><td style="border: 1px solid black;">Lizarbe Alvarez, Ariana Nickole</td><td style="border: 1px solid black;">u202311704</td></tr>
    <tr><td style="border: 1px solid black;">Ortiz Cardenas, Johanna Antuanete</td><td style="border: 1px solid black;">u202310358</td></tr>
    <tr><td style="border: 1px solid black;">Perez Tuesta, Gabriel</td><td style="border: 1px solid black;">u202321281</td></tr>
    <tr><td style="border: 1px solid black;">Sarmiento Medina, Loreley</td><td style="border: 1px solid black;">u202310005</td></tr>
  </tbody>
</table>
<br>

<h4>Setiembre, 2026</h4>

</div>

<div style="page-break-after: always;"></div>

## Registro de Versiones del Informe

<div align="center">I
<table>
  <thead>
    <tr>
      <th>Versión</th>
      <th>Fecha</th>
      <th>Autor</th>
      <th>Descripción de modificación</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>AVN1</td>
      <td>20/09/2026</td>
      <td>
        - Acuña Corahua, Jonatan Ariel <br>
        - Collantes Carrillo, Diego Mateo <br>
        - Landa Ortiz, Sergio Javier <br>
        - Ortiz Cardenas, Johanna Antuanete <br>
        - Perez Tuesta, Gabriel <br>
        - Lizarbe Alvarez, Ariana Nickole <br>
        - Sarmiento Medina, Loreley
      </td>
      <td>
        - Capítulo I: Introducción <br>
        - Capítulo II: Requirements Elicitation & Analysis <br>
        - Capítulo III: Requirements Specification <br>
        - Capítulo IV: Solution Software Design
      </td>
    </tr>
  </tbody>
</table>
</div>

## **Project Report Collaboration Insights**

AV1 (20/09/2026):
<br>
<p align="center">
  <img src="assets/img/in.jpeg" alt="logo" />
</p>

## **Contenido**
- [CAPÍTULO I: Introducción](#capítulo-i-introducción)
  - [1.1. Startup Profile](#11-startup-profile)
    - [1.1.1. Descripción de la Startup](#111-descripción-de-la-startup)
    - [1.1.2. Perfiles de integrantes del equipo](#112-perfiles-de-integrantes-del-equipo)
  - [1.2. Solution Profile](#12-solution-profile)
    - [1.2.1. Antecedentes y problemática](#121-antecedentes-y-problemática)
    - [1.2.2. Lean UX Process](#122-lean-ux-process)
      - [1.2.2.1. Lean UX Problem Statements](#1221-lean-ux-problem-statements)
      - [1.2.2.2. Lean UX Assumptions](#1222-lean-ux-assumptions)
      - [1.2.2.3. Lean UX Hypothesis Statements](#1223-lean-ux-hypothesis-statements)
      - [1.2.2.4. Lean UX Canvas](#1224-lean-ux-canvas)
  - [1.3. Segmentos objetivo](#13-segmentos-objetivo)
- [CAPÍTULO II: Requirements Elicitation & Analysis](#capítulo-ii-requirements-elicitation--analysis)
  - [2.1. Competidores](#21-competidores)
    - [2.1.1. Análisis competitivo](#211-análisis-competitivo)
    - [2.1.2. Estrategias y tácticas frente a competidores](#212-estrategias-y-tácticas-frente-a-competidores)
  - [2.2. Entrevistas](#22-entrevistas)
    - [2.2.1. Diseño de entrevistas](#221-diseño-de-entrevistas)
    - [2.2.2. Registro de entrevistas](#222-registro-de-entrevistas)
    - [2.2.3. Análisis de entrevistas](#223-análisis-de-entrevistas)
  - [2.3. Needfinding](#23-needfinding)
    - [2.3.1. User Personas](#231-user-personas)
    - [2.3.2. User Task Matrix](#232-user-task-matrix)
    - [2.3.3. User Journey Mapping](#233-user-journey-mapping)
    - [2.3.4. Empathy Mapping](#234-empathy-mapping)
  - [2.4. Big Picture EventStorming](#24-big-picture-eventstorming)
  - [2.5. Ubiquitous Language](#25-ubiquitous-language)
- [CAPÍTULO III: Requirements Specification](#capítulo-iii-requirements-specification)
  - [3.1. User Stories](#31-user-stories)
  - [3.2. Impact Mapping](#32-impact-mapping)
  - [3.3. Product Backlog](#33-product-backlog)
- [CAPÍTULO IV: Solution Software Design](#capítulo-iv-solution-software-design)
  - [4.1. Strategic-Level Domain-Driven Design](#41-strategic-level-domain-driven-design)
    - [4.1.1. Design-Level EventStorming](#411-design-level-eventstorming)
      - [4.1.1.1. Candidate Context Discovery](#4111-candidate-context-discovery)
      - [4.1.1.2. Domain Message Flows Modeling](#4112-domain-message-flows-modeling)
      - [4.1.1.3. Bounded Context Canvases](#4113-bounded-context-canvases)
    - [4.1.2. Context Mapping](#412-context-mapping)
    - [4.1.3. Software Architecture](#413-software-architecture)
      - [4.1.3.1. Software Architecture System Landscape Diagram](#4131-software-architecture-system-landscape-diagram)
      - [4.1.3.2. Software Architecture Context Level Diagrams](#4132-software-architecture-context-level-diagrams)
      - [4.1.3.3. Software Architecture Container Level Diagrams](#4133-software-architecture-container-level-diagrams)
      - [4.1.3.4. Software Architecture Deployment Diagrams](#4134-software-architecture-deployment-diagrams)
  - [4.2. Tactical-Level Domain-Driven Design](#42-tactical-level-domain-driven-design)
    - [4.2.1. Bounded Context: IAM / Auth](#421-bounded-context-iam--auth)
      - [4.2.1.1. Domain Layer](#4211-domain-layer)
      - [4.2.1.2. Interface Layer](#4212-interface-layer)
      - [4.2.1.3. Application Layer](#4213-application-layer)
      - [4.2.1.4. Infrastructure Layer](#4214-infrastructure-layer)
      - [4.2.1.5. Bounded Context Software Architecture Component Level Diagrams](#4215-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.1.6. Bounded Context Software Architecture Code Level Diagrams](#4216-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.1.6.1. Bounded Context Domain Layer Class Diagrams](#42161-bounded-context-domain-layer-class-diagrams)
        - [4.2.1.6.2. Bounded Context Database Design Diagram](#42162-bounded-context-database-design-diagram)
    - [4.2.2. Bounded Context: Residential Management](#422-bounded-context-residential-management)
      - [4.2.2.1. Domain Layer](#4221-domain-layer)
      - [4.2.2.2. Interface Layer](#4222-interface-layer)
      - [4.2.2.3. Application Layer](#4223-application-layer)
      - [4.2.2.4. Infrastructure Layer](#4224-infrastructure-layer)
      - [4.2.2.5. Bounded Context Software Architecture Component Level Diagrams](#4225-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.2.6. Bounded Context Software Architecture Code Level Diagrams](#4226-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.2.6.1. Bounded Context Domain Layer Class Diagrams](#42261-bounded-context-domain-layer-class-diagrams)
        - [4.2.2.6.2. Bounded Context Database Design Diagram](#42262-bounded-context-database-design-diagram)
    - [4.2.3. Bounded Context: Reservation](#423-bounded-context-reservation)
      - [4.2.3.1. Domain Layer](#4231-domain-layer)
      - [4.2.3.2. Interface Layer](#4232-interface-layer)
      - [4.2.3.3. Application Layer](#4233-application-layer)
      - [4.2.3.4. Infrastructure Layer](#4234-infrastructure-layer)
      - [4.2.3.5. Bounded Context Software Architecture Component Level Diagrams](#4235-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.3.6. Bounded Context Software Architecture Code Level Diagrams](#4236-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.3.6.1. Bounded Context Domain Layer Class Diagrams](#42361-bounded-context-domain-layer-class-diagrams)
        - [4.2.3.6.2. Bounded Context Database Design Diagram](#42362-bounded-context-database-design-diagram)
    - [4.2.4. Bounded Context: Payment](#424-bounded-context-payment)
      - [4.2.4.1. Domain Layer](#4241-domain-layer)
      - [4.2.4.2. Interface Layer](#4242-interface-layer)
      - [4.2.4.3. Application Layer](#4243-application-layer)
      - [4.2.4.4. Infrastructure Layer](#4244-infrastructure-layer)
      - [4.2.4.5. Bounded Context Software Architecture Component Level Diagrams](#4245-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.4.6. Bounded Context Software Architecture Code Level Diagrams](#4246-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.4.6.1. Bounded Context Domain Layer Class Diagrams](#42461-bounded-context-domain-layer-class-diagrams)
        - [4.2.4.6.2. Bounded Context Database Design Diagram](#42462-bounded-context-database-design-diagram)
    - [4.2.5. Bounded Context: Notification](#425-bounded-context-notification)
      - [4.2.5.1. Domain Layer](#4251-domain-layer)
      - [4.2.5.2. Interface Layer](#4252-interface-layer)
      - [4.2.5.3. Application Layer](#4253-application-layer)
      - [4.2.5.4. Infrastructure Layer](#4254-infrastructure-layer)
      - [4.2.5.5. Bounded Context Software Architecture Component Level Diagrams](#4255-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.5.6. Bounded Context Software Architecture Code Level Diagrams](#4256-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.5.6.1. Bounded Context Domain Layer Class Diagrams](#42561-bounded-context-domain-layer-class-diagrams)
        - [4.2.5.6.2. Bounded Context Database Design Diagram](#42562-bounded-context-database-design-diagram)
    - [4.2.6. Bounded Context: Communication](#426-bounded-context-communication)
      - [4.2.6.1. Domain Layer](#4261-domain-layer)
      - [4.2.6.2. Interface Layer](#4262-interface-layer)
      - [4.2.6.3. Application Layer](#4263-application-layer)
      - [4.2.6.4. Infrastructure Layer](#4264-infrastructure-layer)
      - [4.2.6.5. Bounded Context Software Architecture Component Level Diagrams](#4265-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.6.6. Bounded Context Software Architecture Code Level Diagrams](#4266-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.6.6.1. Bounded Context Domain Layer Class Diagrams](#42661-bounded-context-domain-layer-class-diagrams)
        - [4.2.6.6.2. Bounded Context Database Design Diagram](#42662-bounded-context-database-design-diagram)
    - [4.2.7. Bounded Context: Forum](#427-bounded-context-forum)
      - [4.2.7.1. Domain Layer](#4271-domain-layer)
      - [4.2.7.2. Interface Layer](#4272-interface-layer)
      - [4.2.7.3. Application Layer](#4273-application-layer)
      - [4.2.7.4. Infrastructure Layer](#4274-infrastructure-layer)
      - [4.2.7.5. Bounded Context Software Architecture Component Level Diagrams](#4275-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.7.6. Bounded Context Software Architecture Code Level Diagrams](#4276-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.7.6.1. Bounded Context Domain Layer Class Diagrams](#42761-bounded-context-domain-layer-class-diagrams)
        - [4.2.7.6.2. Bounded Context Database Design Diagram](#42762-bounded-context-database-design-diagram)
    - [4.2.8. Bounded Context: Report](#428-bounded-context-report)
      - [4.2.8.1. Domain Layer](#4281-domain-layer)
      - [4.2.8.2. Interface Layer](#4282-interface-layer)
      - [4.2.8.3. Application Layer](#4283-application-layer)
      - [4.2.8.4. Infrastructure Layer](#4284-infrastructure-layer)
      - [4.2.8.5. Bounded Context Software Architecture Component Level Diagrams](#4285-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.8.6. Bounded Context Software Architecture Code Level Diagrams](#4286-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.8.6.1. Bounded Context Domain Layer Class Diagrams](#42861-bounded-context-domain-layer-class-diagrams)
        - [4.2.8.6.2. Bounded Context Database Design Diagram](#42862-bounded-context-database-design-diagram)
      - [4.2.9. Bounded Context: IoT Access Management](#429-bounded-context-iot-access-management)
      - [4.2.9.1. Domain Layer](#4291-domain-layer)
      - [4.2.9.2. Interface Layer](#4292-interface-layer)
      - [4.2.9.3. Application Layer](#4293-application-layer)
      - [4.2.9.4. Infrastructure Layer](#4294-infrastructure-layer)
      - [4.2.9.5. Bounded Context Software Architecture Component Level Diagrams](#4295-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.9.6. Bounded Context Software Architecture Code Level Diagrams](#4296-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.9.6.1. Bounded Context Domain Layer Class Diagrams](#42961-bounded-context-domain-layer-class-diagrams)
        - [4.2.9.6.2. Bounded Context Database Design Diagram](#42962-bounded-context-database-design-diagram)
    - [4.2.10. Bounded Context: Smart Lighting & Automation](#4210-bounded-context-smart-lighting--automation)
      - [4.2.10.1. Domain Layer](#42101-domain-layer)
      - [4.2.10.2. Interface Layer](#42102-interface-layer)
      - [4.2.10.3. Application Layer](#42103-application-layer)
      - [4.2.10.4. Infrastructure Layer](#42104-infrastructure-layer)
      - [4.2.10.5. Bounded Context Software Architecture Component Level Diagrams](#42105-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.10.6. Bounded Context Software Architecture Code Level Diagrams](#42106-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.10.6.1. Bounded Context Domain Layer Class Diagrams](#421061-bounded-context-domain-layer-class-diagrams)
        - [4.2.10.6.2. Bounded Context Database Design Diagram](#421062-bounded-context-database-design-diagram)
    - [4.2.11. Bounded Context: IoT Telemetry & Analytics](#4211-bounded-context-iot-telemetry--analytics)
      - [4.2.11.1. Domain Layer](#42111-domain-layer)
      - [4.2.11.2. Interface Layer](#42112-interface-layer)
      - [4.2.11.3. Application Layer](#42113-application-layer)
      - [4.2.11.4. Infrastructure Layer](#42114-infrastructure-layer)
      - [4.2.11.5. Bounded Context Software Architecture Component Level Diagrams](#42115-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.11.6. Bounded Context Software Architecture Code Level Diagrams](#42116-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.11.6.1. Bounded Context Domain Layer Class Diagrams](#421161-bounded-context-domain-layer-class-diagrams)
        - [4.2.11.6.2. Bounded Context Database Design Diagram](#421162-bounded-context-database-design-diagram)
    - [4.2.12. Bounded Context: Water Pump Leak Detection](#4212-bounded-context-water-pump-leak-detection)
      - [4.2.12.1. Domain Layer](#42121-domain-layer)
      - [4.2.12.2. Interface Layer](#42122-interface-layer)
      - [4.2.12.3. Application Layer](#42123-application-layer)
      - [4.2.12.4. Infrastructure Layer](#42124-infrastructure-layer)
      - [4.2.12.5. Bounded Context Software Architecture Component Level Diagrams](#42125-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.12.6. Bounded Context Software Architecture Code Level Diagrams](#42126-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.12.6.1. Bounded Context Domain Layer Class Diagrams](#421261-bounded-context-domain-layer-class-diagrams)
        - [4.2.12.6.2. Bounded Context Database Design Diagram](#421262-bounded-context-database-design-diagram)
- [CAPÍTULO V: Solution UI/UX Design](#capítulo-v-solution-uiux-design)
  - [5.1. Style Guidelines](#51-style-guidelines)
    - [5.1.1. General Style Guidelines](#511-general-style-guidelines)
    - [5.1.2. Web, Mobile and IoT Style Guidelines](#512-web-mobile-and-iot-style-guidelines)
  - [5.2. Information Architecture](#52-information-architecture)
    - [5.2.1. Organization Systems](#521-organization-systems)
    - [5.2.2. Labeling Systems](#522-labeling-systems)
    - [5.2.3. SEO Tags and Meta Tags](#523-seo-tags-and-meta-tags)
    - [5.2.4. Searching Systems](#524-searching-systems)
    - [5.2.5. Navigation Systems](#525-navigation-systems)
  - [5.3. Landing Page UI Design](#53-landing-page-ui-design)
    - [5.3.1. Landing Page Wireframe](#531-landing-page-wireframe)
    - [5.3.2. Landing Page Mock-up](#532-landing-page-mock-up)
  - [5.4. Applications UX/UI Design](#54-applications-uxui-design)
    - [5.4.1. Applications Wireframes](#541-applications-wireframes)
    - [5.4.2. Applications Wireflow Diagrams](#542-applications-wireflow-diagrams)
      - [5.4.2.1. Applications Mock-ups](#5421-applications-mock-ups)
    - [5.4.3. Applications User Flow Diagrams](#543-applications-user-flow-diagrams)
  - [5.5. Applications Prototyping](#55-applications-prototyping)
  - [5.6. IoT Device Design](#56-iot-device-design)
- [CAPÍTULO VI: Product Implementation, Validation & Deployment](#capítulo-vi-product-implementation-validation--deployment)
  - [6.1. Software Configuration Management](#61-software-configuration-management)
    - [6.1.1. Software Development Environment Configuration](#611-software-development-environment-configuration)
    - [6.1.2. Source Code Management](#612-source-code-management)
    - [6.1.3. Source Code Style Guide & Coding Conventions](#613-source-code-style-guide--coding-conventions)
    - [6.1.4. Software Deployment Configuration](#614-software-deployment-configuration)
  - [6.2. Landing Page, Services & Applications Implementation](#62-landing-page-services--applications-implementation)
    - [6.2.1. Sprint 1](#621-sprint-1)
      - [6.2.1.1. Sprint Planning 1](#6211-sprint-planning-1)
      - [6.2.1.2. Aspect Leaders and Collaborators](#6212-aspect-leaders-and-collaborators)
      - [6.2.1.3. Sprint Backlog 1](#6213-sprint-backlog-1)
      - [6.2.1.4. Development Evidence for Sprint Review](#6214-development-evidence-for-sprint-review)
      - [6.2.1.5. Testing Suite Evidence for Sprint Review](#6215-testing-suite-evidence-for-sprint-review)
      - [6.2.1.6. Execution Evidence for Sprint Review](#6216-execution-evidence-for-sprint-review)
      - [6.2.1.7. Services Documentation Evidence for Sprint Review](#6217-services-documentation-evidence-for-sprint-review)
      - [6.2.1.8. Software Deployment Evidence for Sprint Review](#6218-software-deployment-evidence-for-sprint-review)
      - [6.2.1.9. Team Collaboration Insights during Sprint](#6219-team-collaboration-insights-during-sprint)
- [Conclusiones y Recomendaciones](#conclusiones-y-recomendaciones)
- [Referencias Bibliográficas](#referencias-bibliográficas)
- [Anexos](#anexos)

## **Student Outcome**
ABET – EAC - Student Outcome 5: La capacidad de funcionar efectivamente en un equipo cuyos miembros juntos proporcionan liderazgo, crean un entorno de colaboración e inclusivo, establecen objetivos, planifican tareas y cumplen objetivos

<table border="1">
<thead>
<tr>
<th>Criterio específico</th>
<th>Acciones realizadas</th>
<th>Conclusiones</th>
</tr>
</thead>
<tbody>
<tr>
<td>5.c.1 Trabaja en equipo para proporcionar liderazgo en forma conjunta</td>
<td>
Acuña Corahua, Jonatan Ariel<br><br>
AV1: Asumí el desarrollo de los principales artefactos de diseño de la solución. Modelé la arquitectura del sistema con C4 Model en Structurizr DSL (Landscape, Context, Container y Deployment, incluidos los microservicios IoT, el nivel de Edge Computing on-premise y los nodos físicos ESP32), definí los Bounded Contexts estratégicos, el Design-Level EventStorming de la extensión IoT y los diagramas de Domain Storytelling, y elaboré el modelado táctico DDD con la persistencia híbrida (PostgreSQL y TimescaleDB), consolidando el Capítulo IV como base común del diseño.<br><br>

Collantes Carrillo, Diego Mateo<br><br>
AV1: Desarrollé liderazgo compartido al coordinar colaborativamente la sección de Strategic-Level Domain-Driven Design. Guié al equipo en el Design-Level EventStorming (Candidate Context Discovery, Domain Message Flows Modeling y Bounded Context Canvases) y en el desarrollo del Context Mapping, facilitando la alineación y estructuración estratégica del dominio del sistema. <br><br>


Landa Ortiz, Sergio Javier<br><br>
AV1: <br>Desarrollé el Capítulo I del informe, incluyendo la definición del Startup Profile, la descripción de la startup y de los integrantes del equipo, los antecedentes y la problemática, así como la aplicación del proceso Lean UX mediante la elaboración de los Problem Statements, Assumptions, Hypothesis Statements y Lean UX Canvas. Además, definí los segmentos objetivo del proyecto, proporcionando una base estructurada para que el equipo comprendiera el contexto de la solución y alineara las actividades de investigación y análisis desarrolladas en las siguientes etapas.<br>

Lizarbe Alvarez, Ariana Nickole<br><br>
AV1: Participé activamente en las entrevistas realizadas a los usuarios para recopilar información sobre sus necesidades, comportamientos y problemas. Además, elaboré los User Stories, el Product Backlog y el Impact Mapping, contribuyendo a organizar los requerimientos, priorizar funcionalidades y relacionar las necesidades identificadas con los objetivos del producto. Estas actividades permitieron aportar al trabajo colaborativo y facilitar la toma de decisiones del equipo durante la definición de la solución. <br><br>

Ortiz Cardenas, Johanna Antuanete<br><br>
AV1: Participé en el Design-Level EventStorming de la extensión IoT, identificando los comandos, eventos de dominio y políticas que conectan los Bounded Contexts Reservation, Smart Lighting & Automation e IoT Access Management. A partir de ese modelo, redacté y documenté el Domain Layer, Interface Layer, Application Layer e Infrastructure Layer de todos los Bounded Contexts del Capítulo IV, incluyendo el nuevo contexto de Water Pump Leak Detection, junto con sus diagramas de clases y de entidad-relación en PlantUML. <br><br>

Perez Tuesta, Gabriel<br><br>
AV1: Asumí el desarrollo de los principales artefactos de investigación y análisis centrados en el usuario. Diseñé las entrevistas para la validación del segmento objetivo, elaboré el User Persona, el Customer Journey Map, el Análisis Competitivo y la User Task Matrix, contribuyendo a comprender las necesidades de los usuarios, identificar oportunidades de mejora y establecer una base sólida para la definición de requerimientos y funcionalidades del producto.<br><br>

Sarmiento Medina, Loreley<br><br>
AV1:Participé en el Design-Level EventStorming, en la identificación de los Bounded Contexts y en la definición de sus capas Domain, Application, Interface e Infrastructure. Además, apoyé en la elaboración de User Stories y en correcciones generales del informe. 
</td>
<td>
AV1: Durante esta entrega, el equipo desarrolló actividades de investigación y análisis orientadas a comprender el problema, identificar las necesidades de los usuarios y evaluar el contexto competitivo del producto. La elaboración del análisis competitivo, el diseño y ejecución de entrevistas, los User Personas, la User Task Matrix y el User Journey Map permitió obtener información relevante sobre los usuarios objetivo, sus necesidades, comportamientos y desafíos. Como resultado, se estableció una base sólida para la definición de requerimientos y la toma de decisiones en las siguientes etapas del proyecto, asegurando que la propuesta de solución estuviera alineada con las necesidades identificadas. Además, en el Capítulo IV el equipo pasó de la investigación al diseño de la solución: la arquitectura y los Bounded Contexts estratégicos quedaron definidos y sirvieron de base para el diseño táctico de cada contexto.
</td>
</tr>
<tr>
<td>5.c.2 Crea un entorno colaborativo e inclusivo, establece metas, planifica tareas y cumple objetivos</td>
<td>
Acuña Corahua, Jonatan Ariel<br><br>
AV1: Estructuré el repositorio del informe con una carpeta por capítulo según las pautas del trabajo final, migré los contenidos base y organicé los recursos gráficos en un directorio común de assets. Configuré un pipeline en Docker (Pandoc y Eisvogel, con filtros propios para tablas y HTML) que compila todo el informe a PDF y mantuve el Registro de Versiones, de modo que el equipo trabaje sobre una misma fuente y cada avance quede trazable.<br><br>

Collantes Carrillo, Diego Mateo<br><br>
AV1: Fomenté un entorno colaborativo e inclusivo al coordinar la planificación y ejecución estratégica del dominio del proyecto (Strategic-Level Domain-Driven Design). Establecí metas claras facilitando el Design-Level EventStorming (Candidate Context Discovery, Domain Message Flows Modeling y Bounded Context Canvases) y organicé el trabajo en equipo para definir el Context Mapping, cumpliendo exitosamente con los objetivos planteados. <br><br>

Landa Ortiz, Sergio Javier<br><br>
AV1: <br>Planifiqué y desarrollé el Capítulo I del proyecto, organizando la información relacionada con la startup, la problemática, el proceso Lean UX y los segmentos objetivo. Establecí una estructura clara para documentar el contexto y la propuesta inicial del producto, permitiendo que el equipo trabajara sobre una base común y alineada. Gracias a ello, se cumplieron los objetivos de la etapa inicial del proyecto y se facilitó el desarrollo de las actividades posteriores de investigación, validación y diseño de la solución.<br>

Lizarbe Alvarez, Ariana Nickole<br><br>
AV1: Participé en la planificación y desarrollo de las actividades de investigación y definición del producto. Colaboré en las entrevistas con usuarios y elaboré los User Stories, Product Backlog e Impact Mapping, organizando los requerimientos y funcionalidades de acuerdo con los objetivos identificados. Con estas actividades contribuí al cumplimiento de los objetivos de la etapa y a mantener una organización clara del trabajo del equipo. <br><br>

Ortiz Cardenas, Johanna Antuanete<br><br>
AV1: Planifiqué las sesiones de Design-Level EventStorming para la extensión IoT, definiendo el alcance de eventos a modelar por cada Bounded Context. Cumplí con la meta de dejar documentado y homogéneo todo el Capítulo IV, redactando cada Bounded Context bajo el mismo formato y corrigiendo la numeración de secciones para mantener la trazabilidad del informe.<br><br>

Perez Tuesta, Gabriel<br><br>
AV1: Planifiqué y desarrollé las actividades relacionadas con la investigación de usuarios y el análisis del contexto del producto. Diseñé las entrevistas, elaboré el User Persona, el Journey Map, el Análisis Competitivo y la User Task Matrix, cumpliendo con los objetivos establecidos para la fase de descubrimiento y validación inicial del proyecto.<br><br>

Sarmiento Medina, Loreley<br><br>
AV1:Colaboré en la organización y revisión de los Bounded Contexts, User Stories y artefactos del proyecto, realizando correcciones generales para mantener la consistencia del informe y contribuir al cumplimiento de los objetivos de la entrega. 
</td>
<td>
AV1: Durante esta entrega, el equipo organizó y ejecutó las actividades correspondientes a la fase de investigación y análisis del proyecto. La planificación de entrevistas, el análisis del mercado y la construcción de artefactos centrados en el usuario permitieron recopilar información relevante y estructurar el conocimiento obtenido. Gracias a ello, se cumplieron los objetivos planteados para la etapa de descubrimiento, generando insumos que sirvieron como base para la definición de requerimientos y el diseño de la solución propuesta. Además, trabajar sobre un único repositorio del informe, con un pipeline automatizado para generar el PDF y un registro de versiones, permitió que los integrantes avanzaran en paralelo y que cada aporte quedara trazable en los commits.
</td>
</tr>
</tbody>
</table>

# Capítulo I: Introducción

## 1.1. Startup Profile
### 1.1.1. Descripción de la Startup

Condomia es una startup tecnológica enfocada en transformar la gestión de condominios y edificios residenciales mediante soluciones digitales accesibles, intuitivas e innovadoras, diseñadas para responder a las necesidades cotidianas de las comunidades residenciales. Creemos que la administración y operación de estos espacios debe desarrollarse de manera ordenada, transparente y eficiente, facilitando la interacción entre administradores y residentes. Por ello, apostamos por la incorporación de tecnologías digitales que permitan modernizar los procesos administrativos, mejorar la comunicación y fortalecer la organización dentro de los edificios.

Asimismo, Condomia busca impulsar la evolución hacia comunidades residenciales más inteligentes mediante la integración de tecnologías de automatización e Internet de las Cosas (IoT). Nuestro enfoque consiste en aprovechar estas tecnologías para optimizar la gestión operativa, facilitar la supervisión de espacios compartidos y promover un entorno residencial más conectado y eficiente. Aspiramos a convertirnos en un aliado tecnológico de las comunidades residenciales, contribuyendo a una gestión basada en la confianza, la innovación y la mejora continua.

**Misión:** Desarrollar soluciones tecnológicas accesibles e innovadoras que integren digitalización y automatización para optimizar la gestión de comunidades residenciales, promoviendo la eficiencia, la transparencia y la comunicación.

**Visión:** Ser una startup tecnológica referente en el Perú en la modernización de condominios y edificios residenciales, reconocida por impulsar comunidades más inteligentes, organizadas y conectadas.

### 1.1.2. Perfiles de integrantes del equipo

| Estudiante | Descripción |
|------------|-------------|
| ![team member profile photo](assets/img/profiles/jonatan_acuna.jpeg) **Acuña Corahua, Jonatan Ariel (u20211b995)** | Soy estudiante del 8vo ciclo de la carrera de Ingeniería de Software en la UPC. Me gustó la carrera tras aprender desarrollo web y desde entonces, sigo aprendiendo para mejorar mis habilidades cada vez más, actualmente me enfoco en aprender tecnologías relacionadas a DevSecOps. En mi tiempo libre juego videojuegos y de vez en cuando salir en bicicleta|
| ![team member profile photo](assets/img/profiles/diego_collantes.png) **Collantes Carrillo, Diego Mateo (u202311823)** | Mi nombre es Diego Collantes. Tengo 21 años. Soy estudiante de octavo ciclo en la Universidad Peruana de Ciencias Aplicadas (UPC). Disfruto de leer, redactar y escuchar música en mi tiempo libre. Elegí esta carrera, ya que me interesó todo el proceso que hay detrás de cada aplicación o programa que usamos en nuestro día a día. Personalmente, espero ampliar mis conocimientos en este ámbito a lo largo de este curso. Además, estoy comprometido a contribuir en todo lo que sea posible con el equipo y a desempeñarme de manera adecuada. |
| ![team member profile photo](assets/img/profiles/antuanete_ortiz.png) **Ortiz Cardenas, Johanna Antuanete (u202310358)** | Mi nombre es Johanna Antuanete Ortiz Cardenas, tengo 20 años y actualmente curso el octavo ciclo de la carrera de Ingeniería de Software en la Universidad Peruana de Ciencias Aplicadas. Me considero una persona proactiva, responsable y orientada a la calidad, con especial interés en el desarrollo frontend, área en la que disfruto crear interfaces intuitivas y visualmente atractivas. Me apasiona mantenerme actualizada sobre las últimas tendencias y avances tecnológicos, lo que me permite aportar soluciones modernas y fundamentadas a cada proyecto. En mi tiempo libre, disfruto escuchar música y leer cómics, actividades que nutren mi creatividad y perspectiva. En el marco de este proyecto grupal, me comprometo a colaborar de manera activa y responsable, aportando ideas de valor y cumpliendo con los entregables en los plazos establecidos, con el objetivo de alcanzar resultados de alta calidad. |
| ![team member profile photo](assets/img//Sergio-Landa.jpeg) **Landa Ortiz, Sergio Javier (u202311086)** |Soy Sergio Landa Ortiz, tengo 20 años. Soy estudiante de la UPC de la carrera de Ingeniería de Software y me encuentro cursando el séptimo ciclo. Me considero una persona responsable y activa, siempre con la actitud de ofrecer ayuda al equipo, cuento con experiencia trabajando como desarrollador frontend. Asimismo, en cuanto a habilidades extracurriculares, soy bailarin y profesor de marinera norteña, me apasionan los deportes y estar actualizado con las nuevas tecnologias que se actualizan dia a dia en el mundo. || ![team member profile photo](assets/img/profiles/antuanete_ortiz.png) **Ortiz Cardenas, Johanna Antuanete (u202310358)** | Mi nombre es Johanna Antuanete Ortiz Cardenas, tengo 20 años y actualmente curso el octavo ciclo de la carrera de Ingeniería de Software en la Universidad Peruana de Ciencias Aplicadas. Me considero una persona proactiva, responsable y orientada a la calidad, con especial interés en el desarrollo frontend, área en la que disfruto crear interfaces intuitivas y visualmente atractivas. Me apasiona mantenerme actualizada sobre las últimas tendencias y avances tecnológicos, lo que me permite aportar soluciones modernas y fundamentadas a cada proyecto. En mi tiempo libre, disfruto escuchar música y leer cómics, actividades que nutren mi creatividad y perspectiva. En el marco de este proyecto grupal, me comprometo a colaborar de manera activa y responsable, aportando ideas de valor y cumpliendo con los entregables en los plazos establecidos, con el objetivo de alcanzar resultados de alta calidad. |
| ![team member profile photo](assets/img/profiles/gabriel.png) **Perez Tuesta, Gabriel (u202321281)** | Soy Gabriel Perez Tuesta, tengo 23 años. Soy estudiante de la UPC de la carrera de Ingeniería de Software y me encuentro cursando el séptimo ciclo. Cuento con habilidades de programación en C++ y Python, así como aptitudes para el desarrollo en UX y UI. Asimismo, en cuanto a habilidades extracurriculares, he contribuido en proyectos con edición de video y fomentando una actitud colaborativa en el equipo. |
| ![team member profile photo](assets/img/profiles/ariana_lizarbe.jpg) **Lizarbe Alvarez, Ariana Nickole (u202311704)** | Mi nombre es Ariana Lizarbe, tengo 21 años y me encuentro cursando el octavo ciclo de Ingeniería de Software en la UPC. Me considero una persona responsable y aplicada, siempre estoy dispuesta a aprender nuevos conceptos y tecnologías. Además de ello, trabajo muy bien en equipo, logrando dividir y delegar tareas a mis compañeros de manera eficiente. |
| ![team member profile photo](assets/img/profiles/loreley_sarmiento.jpg) **Sarmiento Medina, Loreley (u202310005)** | Mi nombre es Loreley Sarmiento, tengo 20 años y actualmente curso la carrera de Ingeniería de Software. Me considero una persona responsable, organizada y con buena disposición para el trabajo en equipo, ya que valoro la comunicación y la colaboración como elementos clave para lograr buenos resultados. Me interesa seguir aprendiendo constantemente y asumir nuevos retos que me permitan fortalecer mis habilidades.En este proyecto, busco participar de manera activa, apoyar a mis compañeros, aportar ideas que contribuyan al desarrollo del equipo y cumplir con las tareas asignadas dentro de los plazos establecidos, con el objetivo de alcanzar un resultado de calidad. |

## 1.2. Solution Profile

Edifika es una plataforma tecnológica orientada a centralizar y simplificar la gestión de condominios y edificios residenciales, ofreciendo a administradores y residentes un entorno digital accesible e intuitivo para organizar sus actividades cotidianas.La plataforma contempla funcionalidades para la gestión y seguimiento de pagos y deudas, la reserva de áreas comunes, la publicación de comunicados oficiales y la consulta de información administrativa. De esta manera, busca reducir la dependencia de procesos manuales y herramientas dispersas, facilitando la comunicación, la transparencia y la coordinación entre los miembros de la comunidad residencial.

Como propuesta de innovación, Edifika incorpora tecnologías de Internet de las Cosas (IoT) para conectar determinados procesos digitales con operaciones físicas del edificio. Esta integración contempla el control inteligente de acceso a áreas comunes, la automatización de iluminación y la recopilación de información de dispositivos conectados para su monitoreo. Mediante una arquitectura que combina dispositivos IoT, Edge Computing y Cloud Computing, se busca facilitar la supervisión de espacios compartidos y mejorar la coordinación de las operaciones residenciales. La propuesta de valor de Edifika consiste en integrar la administración digital y la automatización inteligente dentro de un mismo ecosistema tecnológico, proporcionando herramientas que contribuyan a una gestión residencial más organizada, transparente y eficiente.

### 1.2.1. Antecedentes y problemática

**What — ¿Qué ocurre?**

La administración de edificios multifamiliares enfrenta dificultades relacionadas con la gestión de sus instalaciones, el consumo energético y el control de las áreas compartidas. En Lima, Fabian Malvaceda (2021) identificó que un edificio residencial de Barranco registraba un consumo eléctrico mensual aproximado de 6 195 kWh en sus servicios generales, debido, entre otros factores, al funcionamiento prolongado de luminarias y equipos eléctricos sin mecanismos adecuados de control. De manera similar, Cueva-Villanueva et al. (2025), al evaluar tres edificios multifamiliares en Lima, encontraron diferencias entre los niveles de ahorro energético proyectados y los resultados reales, mostrando que la eficiencia de una edificación también depende de cómo se utilizan y mantienen sus instalaciones.

Estas dificultades no se limitan al consumo eléctrico, sino que también involucran la seguridad y la integración de tecnologías para gestionar los edificios. Affonso et al. (2024) identificaron que los problemas de interoperabilidad, los costos de implementación y la protección de datos representan barreras importantes para el desarrollo de edificios inteligentes. Asimismo, Trabelsi et al. (2023) señalan que los sistemas IoT requieren mecanismos de autorización adecuados para evitar accesos no permitidos a dispositivos y recursos conectados. En conjunto, estas investigaciones muestran problemas de eficiencia operativa, integración tecnológica y seguridad que deben considerarse en la gestión de edificios residenciales.

**When — ¿Cuándo ocurre?**

Las dificultades en la gestión de condominios se presentan durante sus actividades cotidianas, especialmente en los periodos de cobranza de cuotas de mantenimiento, la comunicación de avisos y la coordinación de reservas de áreas comunes. Nieto-Cárdenas et al. (2025), en una investigación realizada en Lima, identificaron que los procesos manuales y los canales de comunicación dispersos ocasionaban retrasos en las tareas administrativas, inconsistencias en los registros financieros y dificultades para realizar el seguimiento de pagos. Por su parte, Asto-Aguilar et al. (2021) analizaron los procesos de reservas e incidencias en el condominio Nuevavista, donde el registro manual de una reserva requería aproximadamente 12 minutos y 38 segundos, lo que refleja las demoras que pueden producirse durante la atención de solicitudes de los residentes.

En el ámbito operativo, los problemas se presentan durante el funcionamiento diario de las instalaciones compartidas, particularmente cuando la iluminación permanece activa sin que exista tránsito de personas o cuando se requiere gestionar autorizaciones de acceso a espacios comunes. Fabian Malvaceda (2021) identificó en un edificio multifamiliar de Barranco que determinadas luminarias permanecían encendidas durante periodos de inactividad debido a la ausencia de mecanismos automáticos de control. Asimismo, Trabelsi et al. (2023) explican que los sistemas IoT requieren mecanismos de autorización capaces de adaptarse a diferentes condiciones de acceso y proteger los recursos conectados. Estas investigaciones permiten reconocer que tanto las actividades administrativas como la operación de las instalaciones presentan necesidades de control y seguimiento durante el funcionamiento habitual de los edificios.

**Where — ¿Dónde ocurre?**

Estas dificultades se presentan en condominios y edificios multifamiliares donde los administradores deben coordinar los servicios residenciales y los residentes comparten instalaciones y espacios comunes. En Lima Metropolitana, Nieto-Cárdenas et al. (2025) estudiaron la gestión administrativa de condominios e identificaron problemas relacionados con los registros manuales, la comunicación y el seguimiento de pagos. Asimismo, Asto-Aguilar et al. (2021) analizaron el condominio Nuevavista, en Perú, donde los procedimientos tradicionales dificultaban la gestión de reservas e incidencias. Estos casos muestran cómo la problemática administrativa puede manifestarse en comunidades residenciales que dependen de herramientas y procesos poco integrados.

En cuanto a la gestión operativa, las dificultades se encuentran principalmente en las instalaciones compartidas, como pasillos, escaleras, estacionamientos y otras áreas comunes que requieren iluminación y supervisión. Fabian Malvaceda (2021) identificó problemas de consumo eléctrico y ausencia de controles automáticos en estos espacios dentro de un edificio multifamiliar de Barranco, Lima. Por su parte, Cueva-Villanueva et al. (2025) estudiaron tres edificios multifamiliares en Santiago de Surco, encontrando diferencias entre la eficiencia energética proyectada y el desempeño real de sus instalaciones. Estos antecedentes permiten situar ambas problemáticas en el contexto residencial limeño, aunque los casos analizados no representan necesariamente a todos los condominios del país.

**Why — ¿Por qué ocurre?**

Las dificultades administrativas en los condominios se deben principalmente al uso de procedimientos manuales y herramientas que no comparten información entre sí. Nieto-Cárdenas et al. (2025) identificaron que la dependencia de hojas de cálculo, documentos físicos y aplicaciones de mensajería dificulta el seguimiento de pagos, la organización de comunicados y la coordinación de actividades comunes. De manera similar, Asto-Aguilar et al. (2021) encontraron que los procesos tradicionales de reservas e incidencias requerían la intervención de varias personas, generando demoras en la atención de solicitudes. Esta dependencia de registros dispersos limita la disponibilidad de información actualizada y aumenta el esfuerzo necesario para administrar las actividades del edificio. En el ámbito operativo, estas dificultades se relacionan con la ausencia de mecanismos automáticos de control y las barreras para incorporar tecnologías inteligentes. Fabian Malvaceda (2021) identificó que el funcionamiento innecesario de luminarias en áreas comunes se debía, entre otros factores, a la falta de sensores de movimiento y dispositivos de programación. Por su parte, Affonso et al. (2024) señalan que los elevados costos iniciales, la incompatibilidad entre dispositivos, la complejidad tecnológica y las preocupaciones sobre seguridad dificultan la adopción de sistemas inteligentes. A ello se suman los desafíos de autorización y protección de recursos conectados descritos por Trabelsi et al. (2023), lo que muestra que la automatización de edificios requiere considerar tanto su funcionamiento como la seguridad de los dispositivos IoT.

**Who — ¿A quién afecta?**

Los principales afectados son los administradores, propietarios e inquilinos de condominios y edificios multifamiliares. Los administradores deben encargarse de la cobranza de cuotas, la organización de reservas, la difusión de comunicados y la atención de solicitudes, tareas que demandan mayor tiempo cuando dependen de procedimientos manuales. Nieto-Cárdenas et al. (2025) identificaron que estas dificultades incrementan la carga administrativa y afectan la satisfacción de los propietarios. Asimismo, Asto-Aguilar et al. (2021) encontraron que los procesos tradicionales de reservas e incidencias requerían la participación de varias personas, dificultando la atención oportuna de los residentes.

Los propietarios e inquilinos también se ven afectados por las condiciones de funcionamiento de las instalaciones compartidas, ya que participan en su uso y, según las obligaciones que les correspondan, asumen parte de los gastos de mantenimiento. Fabian Malvaceda (2021) documentó cómo el consumo eléctrico elevado en las áreas comunes de un edificio de Barranco repercutía en los pagos de sus propietarios. Por otro lado, Affonso et al. (2024) señalan que la adopción de tecnologías inteligentes involucra a gestores y usuarios de edificios, quienes deben afrontar desafíos relacionados con los costos, la seguridad y el manejo de estos sistemas. Por ello, las dificultades de gestión residencial afectan tanto a quienes administran los espacios como a las personas que los utilizan diariamente.

**How — ¿Cómo ocurre?**

La problemática se manifiesta en la forma en que se ejecutan las actividades administrativas de los condominios, donde la información suele distribuirse entre documentos físicos, hojas de cálculo y aplicaciones de mensajería. Esto obliga a los administradores a revisar distintas fuentes para verificar pagos, comunicar decisiones o atender solicitudes de los residentes. Nieto-Cárdenas et al. (2025) documentaron que esta fragmentación genera inconsistencias en los registros financieros y dificultades para dar seguimiento a las actividades. Asto-Aguilar et al. (2021) también observaron que la gestión manual de reservas e incidencias requería la participación de varias personas, prolongando los tiempos de atención y dificultando la coordinación de los espacios compartidos.

Una situación similar se presenta en el funcionamiento de las instalaciones comunes, donde los sistemas eléctricos pueden operar sin considerar la presencia de personas o las necesidades reales de uso. Fabian Malvaceda (2021) identificó luminarias que permanecían encendidas durante periodos sin tránsito peatonal o vehicular, debido a la ausencia de controles automáticos. La incorporación de dispositivos conectados también introduce desafíos, pues estos necesitan intercambiar información y ejecutar acciones de manera segura. Trabelsi et al. (2023) explican que los sistemas IoT deben gestionar permisos y autorizaciones para proteger sus recursos, mientras que Affonso et al. (2024) identifican problemas de interoperabilidad entre equipos y plataformas. Estas condiciones dificultan coordinar las actividades administrativas con el funcionamiento y la supervisión de las instalaciones del edificio.

**How much — ¿Cuánto impacta?**

Las dificultades administrativas pueden afectar la recaudación de cuotas de mantenimiento, incrementar el trabajo de los administradores y generar demoras en la atención de los residentes. Nieto-Cárdenas et al. (2025), en un estudio realizado en un condominio de 416 viviendas ubicado en el Rímac, Lima, identificaron que aproximadamente entre el 25 % y el 30 % de los residentes no cumplía oportunamente con sus pagos de mantenimiento, situación que comprometía la disponibilidad de recursos para cubrir los gastos comunes. La investigación también reportó que, tras incorporar una plataforma digital, las cuotas impagas disminuyeron de aproximadamente un 30 % a un 10 %, mientras que la carga administrativa declarada por los responsables se redujo en un 25 %. En cuanto a las reservas, Asto-Aguilar et al. (2021) encontraron que, en el condominio Nuevavista, el registro de una solicitud tomaba inicialmente 12 minutos y 38 segundos, tiempo que disminuyó a 3 minutos y 40 segundos después de automatizar el proceso. Aunque estos resultados corresponden a experiencias específicas, permiten dimensionar el tiempo y los recursos que puede demandar una administración poco digitalizada.

El impacto económico también se refleja en el funcionamiento de las instalaciones compartidas. Fabian Malvaceda (2021) documentó que el edificio multifamiliar El Sol, ubicado en Barranco, registraba un consumo mensual de aproximadamente 6 195 kWh en sus áreas comunes, equivalente a pagos de entre S/ 4 310 y S/ 5 200 por electricidad. Parte del problema estaba relacionada con luminarias y equipos eléctricos que funcionaban sin controles adecuados, incluso cuando no era necesario mantenerlos encendidos. A su vez, Cueva-Villanueva et al. (2025) encontraron que uno de los edificios multifamiliares evaluados en Lima alcanzó un ahorro energético real del 10,64 %, pese a que sus estimaciones iniciales eran mayores. Esto demuestra que la eficiencia proyectada no siempre coincide con el desempeño durante la operación. Si bien los estudios muestran el costo de mantener procesos manuales y sistemas con control limitado, los beneficios económicos de integrar gestión administrativa e IoT dependerán de las características de cada edificio, sus patrones de uso y los costos de implementación y mantenimiento.

### 1.2.2. Lean UX Process
#### 1.2.2.1. Lean UX Problem Statements

Actualmente, la gestión de condominios y edificios multifamiliares se centra en actividades como el seguimiento de pagos, la reserva de áreas comunes y la comunicación entre administradores y residentes. Sin embargo, estas tareas suelen apoyarse en procedimientos manuales y herramientas poco integradas, lo que puede generar retrasos y dificultades para organizar la información (Asto-Aguilar et al., 2021; Nieto-Cárdenas et al., 2025). A ello se suman las limitaciones en el control de las instalaciones compartidas, como el funcionamiento innecesario de luminarias y la necesidad de gestionar de manera segura los accesos y dispositivos conectados (Fabian Malvaceda, 2021; Trabelsi et al., 2023).

Aunque existen herramientas digitales para administrar condominios y tecnologías IoT para automatizar instalaciones, estas capacidades no siempre se gestionan de manera conjunta. Esto plantea una oportunidad para conectar los procesos administrativos con el control de las áreas comunes, facilitando el seguimiento de las actividades y reduciendo la dependencia de procedimientos separados.

Para atender esta necesidad, Condomia propone Edifika, una plataforma que centralizará la gestión de pagos y deudas, reservas de áreas comunes y comunicados. Además, incorporará tecnologías IoT para gestionar accesos autorizados, automatizar la iluminación y supervisar eventos de los dispositivos conectados, buscando que administradores y residentes puedan realizar sus actividades desde un entorno integrado.

La propuesta se dirigirá inicialmente a administradores, propietarios e inquilinos de condominios y edificios multifamiliares de Lima Metropolitana que actualmente utilizan procedimientos manuales o herramientas dispersas para gestionar sus actividades y servicios compartidos.

Sabremos que la propuesta está cumpliendo sus objetivos cuando los administradores reduzcan el tiempo dedicado al seguimiento de pagos y reservas, los residentes puedan consultar información y gestionar solicitudes con mayor facilidad, los accesos autorizados queden registrados y disminuya el tiempo de funcionamiento innecesario de las luminarias en áreas comunes. Estos resultados se evaluarán mediante indicadores de tiempo, uso del sistema y registros operativos de los dispositivos IoT.

#### 1.2.2.2. Lean UX Assumptions

A partir del problema identificado, se plantean los siguientes supuestos sobre la viabilidad de Edifika, las necesidades de sus usuarios y las funcionalidades que podrían aportar valor a la gestión de condominios. Estas afirmaciones representan creencias iniciales del equipo y deberán contrastarse durante las actividades de investigación y validación del producto.

##### Business Assumptions

- **BA01:** Creemos que los condominios de Lima Metropolitana representan un mercado potencial para una plataforma que combine gestión administrativa y automatización de áreas comunes mediante IoT.
- **BA02:** Creemos que los administradores estarán dispuestos a contratar Edifika mediante una suscripción mensual si perciben mejoras en la organización de sus actividades y el control de las instalaciones.
- **BA03:** Creemos que integrar funcionalidades administrativas e IoT en una misma plataforma permitirá diferenciar a Edifika de las alternativas utilizadas actualmente por las comunidades residenciales.
- **BA04:** Creemos que el costo de instalación y mantenimiento de los dispositivos IoT influirá en la decisión de contratación, por lo que será importante ofrecer una implementación acorde con las características de cada edificio.

##### Business Outcome Assumptions

- **BO01:** Creemos que una experiencia de uso sencilla y beneficios percibidos por los administradores favorecerán la contratación y permanencia de los condominios en la plataforma.
- **BO02:** Creemos que la incorporación progresiva de funcionalidades IoT aumentará el valor percibido del servicio y permitirá ofrecer alternativas de suscripción según las necesidades de cada comunidad.
- **BO03:** Creemos que una mayor frecuencia de uso de los módulos administrativos y de supervisión contribuirá a la continuidad del servicio y a la retención de clientes.

##### User Assumptions

- **UA01:** Creemos que los administradores necesitan consultar información actualizada sobre pagos, deudas, reservas y comunicados sin depender de varios registros o canales.
- **UA02:** Creemos que los propietarios e inquilinos prefieren realizar sus consultas y reservas desde una plataforma accesible, en lugar de coordinar cada solicitud directamente con la administración.
- **UA03:** Creemos que los administradores valorarán la posibilidad de consultar registros de acceso y conocer el estado de los dispositivos instalados en las áreas comunes.
- **UA04:** Creemos que tanto administradores como residentes podrían mostrar resistencia a utilizar nuevas herramientas si estas resultan complicadas o requieren demasiados pasos para realizar tareas habituales.

##### User Outcome and Benefit Assumptions

- **UOB01:** Creemos que los administradores buscan reducir el tiempo dedicado al seguimiento de pagos y a la elaboración de reportes, manteniendo un mayor control de la información financiera.
- **UOB02:** Creemos que los residentes desean reservar áreas comunes sin duplicidades y conocer oportunamente la confirmación de sus solicitudes.
- **UOB03:** Creemos que una comunicación organizada permitirá que propietarios e inquilinos reciban avisos importantes y consulten información sin depender de mensajes dispersos.
- **UOB04:** Creemos que contar con registros de accesos autorizados facilitará la supervisión de las áreas compartidas y brindará mayor confianza a los usuarios.
- **UOB05:** Creemos que automatizar la iluminación según la presencia de personas permitirá disminuir el funcionamiento innecesario de luminarias y contribuirá a un uso más eficiente de la energía.

##### Feature Assumptions

- **FA01 — Gestión de pagos y deudas:** Creemos que un módulo que permita registrar pagos, consultar deudas y revisar estados de cuenta facilitará el seguimiento de las obligaciones de cada unidad residencial.
- **FA02 — Reservas de áreas comunes:** Creemos que un sistema de reservas con disponibilidad y confirmaciones permitirá organizar el uso de los espacios compartidos y evitar solicitudes superpuestas.
- **FA03 — Comunicados y notificaciones:** Creemos que disponer de comunicados oficiales y notificaciones dentro de una misma plataforma mejorará el acceso de los residentes a la información del condominio.
- **FA04 — Control de accesos IoT:** Creemos que la gestión de autorizaciones mediante dispositivos IoT permitirá controlar el ingreso a determinadas áreas comunes y conservar un registro de los eventos de acceso.
- **FA05 — Iluminación inteligente:** Creemos que utilizar sensores de presencia para controlar automáticamente las luminarias de áreas comunes reducirá los periodos de iluminación innecesaria.
- **FA06 — Monitoreo de dispositivos IoT:** Creemos que un módulo de supervisión que muestre el estado de los dispositivos y sus eventos permitirá a los administradores identificar situaciones que requieran atención sin realizar verificaciones presenciales constantes.

#### 1.2.2.3. Lean UX Hypothesis Statements

A partir de las Feature Assumptions identificadas, se plantean seis hipótesis orientadas a comprobar si las funcionalidades propuestas para Edifika generan beneficios para los administradores y residentes, y contribuyen a los resultados de negocio esperados por Condomia.

**HS01 — Gestión de pagos y deudas (FA01)**

Creemos que lograremos incrementar el uso recurrente de Edifika y favorecer la permanencia de los condominios en la plataforma, si los administradores consiguen reducir el tiempo dedicado al seguimiento de pagos y los propietarios pueden consultar sus obligaciones con mayor facilidad, mediante un módulo centralizado de pagos, deudas y estados de cuenta.

**HS02 — Reservas de áreas comunes (FA02)**

Creemos que lograremos incrementar el uso de Edifika en las actividades cotidianas de los condominios, si los propietarios e inquilinos consiguen reservar espacios compartidos sin duplicidades y recibir confirmaciones oportunas, mediante un sistema que permita consultar la disponibilidad y gestionar reservas de áreas comunes.

**HS03 — Comunicados y notificaciones (FA03)**

Creemos que lograremos fomentar el uso frecuente de Edifika y mejorar el valor percibido del servicio, si los administradores pueden difundir información de manera organizada y los residentes reciben oportunamente los avisos de su comunidad, mediante un módulo centralizado de comunicados y notificaciones.

**HS04 — Control de accesos IoT (FA04)**

Creemos que lograremos aumentar el valor percibido de Edifika y favorecer la contratación de sus funcionalidades IoT, si los administradores consiguen supervisar los accesos autorizados y los residentes pueden utilizar las áreas comunes con mayor confianza, mediante dispositivos IoT vinculados a un sistema de autorizaciones y registro de eventos de acceso.

**HS05 — Iluminación inteligente (FA05)**

Creemos que lograremos aumentar el interés de los condominios por incorporar las funcionalidades IoT de Edifika, si los administradores consiguen reducir el tiempo de funcionamiento innecesario de las luminarias en áreas comunes, mediante sensores de presencia y mecanismos de encendido y apagado automático.

**HS06 — Monitoreo de dispositivos IoT (FA06)**

Creemos que lograremos fortalecer el uso recurrente de las funcionalidades IoT de Edifika y favorecer la continuidad del servicio, si los administradores consiguen consultar el estado de los dispositivos conectados e identificar eventos que requieran atención, mediante un módulo centralizado de supervisión y monitoreo IoT.

La validación de estas hipótesis permitirá identificar qué funcionalidades aportan valor a los administradores y residentes, así como su contribución a los resultados de negocio esperados. Para ello, se evaluarán indicadores relacionados con el tiempo dedicado a las tareas administrativas, el uso de la plataforma, la gestión de accesos autorizados y el funcionamiento de la iluminación en áreas comunes. Los resultados obtenidos permitirán determinar qué supuestos se respaldan con evidencia y cuáles requieren ajustes.

#### 1.2.2.4. Lean UX Canvas

![Lean Ux Canvas](assets/img/lean_ux_canvas1.png)

 *Figura. Lean Ux Canvas. Elaborado por el equipo utilizando Figma (Figma, s.f.).*

## 1.3. Segmentos objetivo

### Administradores de edificios y condominios

Este segmento comprende a las personas responsables de coordinar la administración, las finanzas y el funcionamiento de los edificios residenciales. En condominios estudiados en Lima se han identificado dificultades relacionadas con el uso de registros manuales, la cobranza de cuotas y la comunicación con los residentes (Nieto-Cárdenas et al., 2025). Para este grupo, Edifika plantea integrar las actividades administrativas con la supervisión de las instalaciones comunes.

- **Edad:** Personas adultas responsables de la administración del condominio, sin un rango etario excluyente.
- **Ubicación inicial:** Lima Metropolitana y Callao.
- **Características demográficas y de comportamiento:**
  - Administran pagos, deudas, reservas, comunicados y reportes.
  - Coordinan el mantenimiento y funcionamiento de las áreas comunes.
  - Pueden utilizar hojas de cálculo, mensajería y registros físicos para sus actividades.
  - Necesitan consultar información financiera y operativa para tomar decisiones.
- **Necesidades principales:**
  - Centralizar la información de pagos, deudas y estados de cuenta.
  - Organizar reservas y comunicados desde una misma plataforma.
  - Consultar reportes administrativos y financieros.
  - Supervisar los accesos autorizados y sus registros mediante dispositivos IoT.
  - Monitorear el estado de los dispositivos conectados y el funcionamiento de la iluminación en áreas comunes.

### Propietarios e inquilinos de condominios

Este segmento comprende a las personas que poseen o habitan unidades residenciales y utilizan los servicios compartidos del edificio. Sus necesidades se relacionan con la consulta de información, la coordinación de reservas y el acceso a las áreas comunes. Asto-Aguilar et al. (2021) documentaron dificultades en los procesos manuales de reservas en un condominio peruano, mientras que Nieto-Cárdenas et al. (2025) identificaron problemas vinculados con la comunicación y la información sobre pagos.

- **Edad:** Personas adultas propietarias o residentes, sin un rango etario excluyente.
- **Ubicación inicial:** Lima Metropolitana y Callao.
- **Características demográficas y de comportamiento:**
  - Incluye propietarios residentes, propietarios no residentes e inquilinos.
  - Consultan información sobre pagos, normas y actividades del condominio.
  - Utilizan espacios compartidos sujetos a horarios, reservas y autorizaciones.
  - Pueden acceder a los servicios digitales desde dispositivos móviles o computadoras.
- **Necesidades principales:**
  - Consultar sus pagos, deudas y estados de cuenta según los permisos asignados.
  - Recibir comunicados y notificaciones oportunamente.
  - Reservar áreas comunes y verificar su disponibilidad.
  - Utilizar accesos autorizados a espacios compartidos mediante mecanismos seguros.
  - Contar con instalaciones comunes cuyo funcionamiento responda a las necesidades de uso.

# Capítulo II: Requirements Elicitation & Analysis

## 2.1. Competidores
### 2.1.1. Análisis competitivo


| Categoría | Criterio | Edifika | Condo Control | Buildium | AppFolio |
|---|---|---|---|---|---|
| **Propósito** | **¿Por qué llevar a cabo este análisis?** | Identificar oportunidades de diferenciación para Edifika al comparar la gestión administrativa de condominios y la integración de tecnologías IoT, considerando pagos, reservas, comunicaciones, control de accesos e iluminación inteligente. | — | — | — |
| **Perfil** | **Overview** | Plataforma propuesta por Condomia para condominios peruanos. Busca centralizar pagos, deudas, reservas y comunicados, incorporando control de accesos, iluminación automática y monitoreo IoT. | Software especializado en la administración de condominios y asociaciones residenciales, con funciones administrativas, comunicación y seguridad mediante integraciones. | Plataforma en la nube para gestionar propiedades y asociaciones residenciales, con herramientas financieras, operativas y de atención a residentes. | Plataforma de administración inmobiliaria con funciones financieras, operativas y conexiones con sistemas inteligentes mediante proveedores asociados. |
| **Perfil** | **Ventaja competitiva: ¿Qué valor ofrece?** | Propone reunir la gestión administrativa y la supervisión IoT en una experiencia adaptada inicialmente a condominios de Lima Metropolitana. Su diferenciación deberá validarse. | Combina funciones para comunidades residenciales con integraciones especializadas de pagos y control de accesos, como ButterflyMX. | Ofrece herramientas financieras, gestión de residentes, automatización administrativa y reservas según el plan contratado. | Destaca por la amplitud de sus herramientas inmobiliarias y la posibilidad de integrar control de acceso y tecnología residencial inteligente. |
| **Perfil de Marketing** | **Mercado objetivo** | Administradores, propietarios e inquilinos de condominios y edificios multifamiliares de Lima Metropolitana. | Condominios, asociaciones de propietarios y empresas administradoras de comunidades residenciales. | Administradores profesionales de propiedades, asociaciones residenciales y carteras inmobiliarias. | Empresas administradoras, operadores inmobiliarios y propietarios de carteras de inmuebles. |
| **Perfil de Marketing** | **Estrategias de marketing** | Estrategia propuesta basada en demostraciones del producto, facilidad de uso, atención al mercado peruano y beneficios de integrar administración e IoT. | Promoción de soluciones para comunidades residenciales mediante demostraciones, recursos informativos y planes adaptados al tamaño de la comunidad. | Captación de administradores mediante contenidos especializados, demostraciones y presentación de beneficios de eficiencia operativa. | Promoción de una plataforma integral mediante demostraciones, contenido para profesionales inmobiliarios y un ecosistema de integraciones. |
| **Perfil de Producto** | **Productos y servicios** | Gestión de pagos y deudas; reservas de áreas comunes; comunicados y notificaciones; control de accesos IoT; iluminación automática mediante sensores; monitoreo de dispositivos conectados. **Funcionalidades propuestas.** | Pagos en línea, reservas de espacios, comunicados, documentos, gestión de visitantes y acceso inteligente mediante integraciones como ButterflyMX. | Contabilidad, pagos, reportes, comunicación con residentes, mantenimiento y reservas de áreas comunes según el plan. | Gestión financiera, cobros, mantenimiento, comunicación, control de accesos inteligente e integración con tecnología residencial mediante socios como Homebase y PointCentral. |
| **Perfil de Producto** | **Precios y costos** | Modelo propuesto de suscripción mensual por condominio, con costos de instalación y mantenimiento IoT por definir. No existe una tarifa comercial validada. | Planes y cotizaciones según las características de la comunidad. Algunas funciones e integraciones pueden representar costos adicionales. | Suscripción mediante planes escalonados según necesidades y unidades administradas. Algunas transacciones y funcionalidades tienen cargos adicionales. | Modelo comercial de suscripción con cotización según características de la cartera y funcionalidades requeridas. Las integraciones pueden implicar costos de terceros. |
| **Perfil de Producto** | **Canales de distribución** | Plataforma web propuesta para administradores y residentes, con interfaz adaptable a dispositivos móviles. La disponibilidad de aplicaciones nativas dependerá del alcance de desarrollo. | Plataforma web, portal de residentes y aplicación móvil. | Plataforma web y aplicaciones móviles para administradores y residentes. | Plataforma web, aplicaciones móviles e integraciones con proveedores tecnológicos. |
| **Análisis SWOT** | **Fortalezas** | Propuesta enfocada inicialmente en el contexto peruano; integración prevista entre gestión administrativa, accesos IoT e iluminación inteligente. | Especialización en condominios, herramientas de comunicación y ecosistema de integraciones de seguridad. | Funcionalidades financieras consolidadas, gestión de asociaciones y herramientas de automatización. | Amplia cobertura de procesos inmobiliarios, automatización y alianzas con proveedores de tecnología inteligente. |
| **Análisis SWOT** | **Debilidades** | Producto nuevo sin adopción comercial demostrada; costos y mantenimiento del hardware IoT pendientes de validar; necesidad de probar la integración física y digital. | El uso de determinadas capacidades de seguridad depende de proveedores externos y de sus integraciones. | Su orientación principal es la administración inmobiliaria; no se verificó una solución nativa equivalente al control de iluminación común planteado para Edifika. | Algunas capacidades inteligentes dependen de integraciones externas; su amplitud funcional puede exceder las necesidades de condominios pequeños. |
| **Análisis SWOT** | **Oportunidades** | Explorar la demanda local de digitalización residencial, automatización de iluminación y supervisión de accesos en áreas comunes. | Ampliar las integraciones y servicios disponibles para comunidades residenciales. | Extender sus servicios mediante integraciones y herramientas de automatización de propiedades. | Ampliar sus capacidades de edificios conectados mediante alianzas e integraciones tecnológicas. |
| **Análisis SWOT** | **Amenazas** | Competidores establecidos con servicios similares; costos de dispositivos e instalación; riesgos de ciberseguridad, interoperabilidad y resistencia a la adopción. | Nuevas plataformas especializadas, cambios tecnológicos y dependencia de integraciones de terceros. | Competidores con mayor especialización residencial e incorporación de soluciones inteligentes. | Competencia de plataformas especializadas y riesgos vinculados a la integración de distintas tecnologías y proveedores. |

**Fuente:** Elaboración propia a partir de la revisión de los sitios oficiales de Condo Control, Buildium y AppFolio (2026).


### 2.1.2. Estrategias y tácticas frente a competidores

**Gestión administrativa e IoT en una misma plataforma**

**Estrategia:** Diferenciar a Edifika mediante una propuesta que combine la administración de condominios con el control y monitoreo de sus instalaciones compartidas, evitando que ambas actividades dependan de sistemas separados.

**Táctica:** Integrar la gestión de pagos, deudas, reservas y comunicados con funcionalidades IoT de control de accesos, iluminación automática y supervisión de dispositivos conectados.

**Transparencia en la gestión administrativa**

**Estrategia:** Fortalecer la confianza entre administradores y residentes facilitando el acceso a información organizada sobre las actividades y obligaciones del condominio.

**Táctica:** Incorporar consultas de pagos pendientes, estados de cuenta y reportes financieros, respetando los permisos asignados a cada usuario y la confidencialidad de la información.

**Comunicación centralizada y accesible**

**Estrategia:** Reducir la dependencia de canales informales y facilitar la difusión de información relevante para la comunidad residencial.

**Táctica:** Implementar un módulo de comunicados y notificaciones que permita a los administradores publicar avisos y a los residentes consultarlos desde la plataforma.

**Experiencia de usuario simple y adaptable**

**Estrategia:** Facilitar la adopción de Edifika mediante una experiencia sencilla para administradores, propietarios e inquilinos, considerando que sus necesidades y niveles de familiaridad tecnológica pueden variar.

**Táctica:** Diseñar interfaces diferenciadas por rol, con navegación clara y acceso directo a las funciones más utilizadas, como consultar pagos, reservar espacios, revisar comunicados y supervisar instalaciones.

**Adaptación al contexto residencial peruano**

**Estrategia:** Orientar inicialmente la propuesta a condominios de Lima Metropolitana, considerando sus procesos de administración, necesidades operativas y condiciones de implementación tecnológica.

**Táctica:** Utilizar terminología y flujos administrativos acordes con el contexto local, contemplando mecanismos de registro y seguimiento de pagos utilizados en Perú. Evaluar posteriormente la integración con servicios como Yape y Plin, según su viabilidad técnica y comercial.

**Gestión coordinada de reservas y accesos IoT**

**Estrategia:** Mejorar la organización y supervisión del uso de áreas comunes mediante la relación entre las reservas realizadas por residentes y las autorizaciones de acceso correspondientes.

**Táctica:** Implementar un calendario de disponibilidad y confirmación de reservas, vinculado a mecanismos IoT de autorización y registro de accesos para los espacios que dispongan de dispositivos compatibles.

**Automatización de iluminación en áreas comunes**

**Estrategia:** Proponer un uso más eficiente de la energía mediante el control automático de la iluminación en espacios compartidos, como complemento a las funciones administrativas de Edifika.

**Táctica:** Incorporar sensores de presencia conectados a dispositivos de control que permitan encender o apagar luminarias según la ocupación del espacio, considerando las condiciones de seguridad y funcionamiento de cada instalación.

**Monitoreo y seguridad de dispositivos IoT**

**Estrategia:** Favorecer la supervisión de los dispositivos conectados y proteger las operaciones vinculadas al control de accesos y a la automatización de instalaciones comunes.

**Táctica:** Desarrollar un panel para consultar el estado de los dispositivos y sus eventos, establecer permisos de acceso según los roles autorizados e incorporar mecanismos de comunicación segura entre los componentes IoT y la plataforma.

## 2.2. Entrevistas

### 2.2.1. Diseño de entrevistas

Para el diseño de las entrevistas se utilizó el método de entrevistas semiestructuradas, el cual combina un conjunto de preguntas guía con la flexibilidad de profundizar en las respuestas del entrevistado según la dinámica de la conversación. Este enfoque permite recopilar información cualitativa sobre experiencias, hábitos, ineficiencias operativas y expectativas de los usuarios, sin condicionar sus respuestas mediante opciones cerradas o sesgadas. 

Las preguntas fueron redactadas de manera abierta e inductiva para incentivar respuestas narrativas y reflexivas. El instrumento se estructuró en dos guiones diferenciados según los segmentos objetivo del proyecto, abordando tanto la gestión administrativa y financiera tradicional como la supervisión y vivencia en torno a la infraestructura e innovaciones tecnológicas aplicadas a control de accesos inteligentes, sensores de iluminación y sistemas de riego automatizado.

#### 1. Segmento: Administradores de edificios y condominios

- ¿Cuántos inmuebles administran actualmente y cómo coordinan las tareas operativas cotidianas?
- ¿Qué procedimientos y herramientas emplean actualmente para la cobranza, registro contable y conciliación de cuotas de mantenimiento?
- ¿Cómo se realiza la gestión y control de las reservas de áreas comunes entre los edificios a su cargo?
- ¿De qué manera emiten los comunicados oficiales y cómo comprueban que todos los residentes han tomado conocimiento?
- ¿Cuál es la tarea que más tiempo y recursos consume en la rutina de su equipo de trabajo?
- ¿Cuáles son los motivos más comunes por los que surgen quejas o desconfianza por parte de las juntas de propietarios?
- ¿Qué experiencia han tenido al evaluar o implementar software especializado para condominios y cuáles fueron los principales obstáculos encontrados?
- ¿Qué criterios y requerimientos funcionales son determinantes al momento de decidir la adopción de una solución tecnológica unificada?
- ¿Bajo qué modelos de tarifación o rangos de inversión operan habitualmente para la contratación de herramientas digitales?
- ¿Cómo supervisan actualmente la seguridad en portería, el ingreso de visitantes externos y las autorizaciones para mudanzas o proveedores?
- ¿Cómo gestionan el consumo eléctrico en zonas comunes (pasadizos, estacionamientos, escaleras) y cómo evalúan la integración de sensores de iluminación inteligentes?
- ¿De qué manera monitorean el mantenimiento y riego de las áreas verdes y jardines, y qué impacto tendría supervisar un sistema de riego automático desde un panel centralizado?
- ¿Qué tan relevante resulta para su administración contar con un registro y monitoreo centralizado de cerraduras inteligentes, sensores de luz y riego automático sin sobrecargar al residente con tareas técnicas?

---

#### 2. Segmento: Propietarios e Inquilinos

- ¿Cómo se le notifica usualmente el desglose de su cuota de mantenimiento y las novedades del edificio?
- ¿Cómo describe su experiencia al momento de abonar la cuota mensual y hacer llegar el sustento de pago a la administración?
- ¿Dónde o de qué manera puede revisar su histórico de pagos cuando necesita contrastar cobros pasados?
- ¿Qué inconvenientes ha experimentado al querer solicitar o usar un área común del edificio?
- ¿Cómo percibe la claridad y rendición de cuentas sobre los gastos, compras y fondos de reserva del condominio?
- ¿A través de qué canales prefiere recibir la información formal del edificio y qué situaciones le generan saturación en canales informales (como chats grupales)?
- ¿Cuál es el trámite o gestión con la administración que considera más demorado o poco práctico?
- ¿Qué aspectos considera indispensables en un canal digital para gestionar los temas de su vivienda?
- ¿Cómo califica la agilidad y seguridad al momento de autorizar visitas, delivery o mudanzas en el acceso principal de su edificio?
- ¿Qué fallas o molestias identifica en la iluminación de pasadizos, cocheras o escaleras comunes, y cómo valora el funcionamiento de luces automáticas por detección de movimiento?
- ¿Cuál es su percepción sobre el cuidado de las áreas verdes del condominio y el impacto del riego en el uso eficiente del agua del edificio?
- Si el edificio contara con cerraduras digitales seguras, iluminación automática y riego optimizado, ¿cómo prefiere que la administración gestione estos sistemas sin que usted deba preocuparse por labores técnicas o configuraciones complejas?

---

### 2.2.2. Registro de entrevistas

#### Segmento objetivo: Administradores de edificios y condominios

| **ENTREVISTA 1** | |
|---|---|
| **Nombre entrevistado** | César Villalobos |
| **Edad** | 51 años |
| **Distrito** | Cercado de Lima |
| **Fecha y hora** | 12 de septiembre de 2026 – 10:30 p. m. |
| **Duración** | 00:06:48 |
| **Link del video** | [Ver video de la entrevista](https://upcedupe-my.sharepoint.com/:v:/g/personal/u202310358_upc_edu_pe/IQDEXx-uGk1tS71xXaDeSeDeAf3fEODmStVZKztx7vcr0i8?nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJPbmVEcml2ZUZvckJ1c2luZXNzIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXciLCJyZWZlcnJhbFZpZXciOiJNeUZpbGVzTGlua0NvcHkifX0&e=5V6W7o) |
| **Foto entrevista** | <img src="assets/img/interviews/admin1.png" alt="César Villalobos" /> |
| **Resumen** | César administra 15 edificios en GWM EIRL apoyándose en hojas de cálculo con macros, WhatsApp y banca online. Explica que la impresión y distribución física de avisos de cobranza es el proceso más engorroso de su rutina. Ha descartado software previo por su interfaz sobrecargada, la cual creaba confusión en las juntas vecinales. En el aspecto de infraestructura e IoT, resalta la necesidad de supervisar el control de accesos en portería mediante cerraduras inteligentes que generen bitácoras digitales, ya que los libros de visitas en papel suelen perderse o ser adulterados. Respecto a la eficiencia energética y áreas comunes, considera muy ventajoso auditar centralmente el estado de sensores de iluminación y programaciones de riego automático, dado que muchas quejas vecinales derivan del alto gasto eléctrico por luces encendidas innecesariamente o del mal aspecto de jardines por descuido del personal. Afirma que el administrador debe retener el control exclusivo de los registros y configuraciones de estos dispositivos, ofreciendo a los propietarios solo el beneficio directo sin saturarlos con aspectos técnicos. Considera aceptable una tarifa de entre 2 y 5 USD mensuales por departamento. |

| **ENTREVISTA 2** | |
|---|---|
| **Nombre entrevistado** | Alejandro Galindo |
| **Edad** | 26 años |
| **Distrito** | San Miguel |
| **Fecha y hora** | 13 de septiembre de 2026 – 04:00 p. m. |
| **Duración** | 00:02:26 |
| **Link del video** | [Ver video de la entrevista](https://upcedupe-my.sharepoint.com/:v:/g/personal/u202321281_upc_edu_pe/IQAW5DBOyn8xS6ZiZVZwufEIAU9yh_7P6mIIpJ_RzxJp6is?e=kLEW30&nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJTdHJlYW1XZWJBcHAiLCJyZWZlcnJhbFZpZXciOiJTaGFyZURpYWxvZy1MaW5rIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXcifX0%3D) |
| **Foto entrevista** | <img src="assets/img/alejandro.jpeg" alt="Alejandro Galindo" /> |
| **Resumen** | Alejandro tiene a su cargo 4 edificios y opera bajo métodos mayormente manuales: hojas de cálculo para cobros y chats de mensajería instantánea para notificaciones y reservas. Manifiesta que el seguimiento manual de depósitos bancarios genera retrasos y constantes reclamos por recibos no conciliados a tiempo. En relación con las instalaciones de los inmuebles, resalta que la gestión de portería es un punto crítico: validar accesos con llaves tradicionales o registros físicos genera cuellos de botella en horas punta; por ello, ve de alto valor un sistema con cerraduras inteligentes donde el administrador supervise accesos y permisos. Asimismo, destaca que la automatización de iluminación mediante sensores de presencia y el riego inteligente de áreas verdes reducirían los costos variables del edificio, uno de los rubros que más observan los propietarios. Valora que la plataforma centralice los reportes de estos dispositivos para monitorear anomalías técnicas sin que los inquilinos deban intervenir en la administración del equipamiento. |

| **ENTREVISTA 3** | |
|---|---|
| **Nombre entrevistado** | Kattya Valentina |
| **Edad** | 25 años |
| **Distrito** | San Miguel |
| **Fecha y hora** | 14 de septiembre de 2026 – 11:15 a. m. |
| **Duración** | 00:02:39 |
| **Link del video** | [Ver video de la entrevista](https://upcedupe-my.sharepoint.com/:v:/g/personal/u202321281_upc_edu_pe/IQBytTOuLENRRpzS9nYLELHKAVVSvtdyP9hPyITLZN-VWLU?e=nGaihv&nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJTdHJlYW1XZWJBcHAiLCJyZWZlcnJhbFZpZXciOiJTaGFyZURpYWxvZy1MaW5rIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXcifX0%3D) |
| **Foto entrevista** | <img src="assets/img/kattya.jpeg" alt="Kattya Valentina" /> |
| **Resumen** | Kattya gestiona 15 condominios apoyada en macros de Excel, mensajería de WhatsApp y portales bancarios. Señala que el desglose y cobranza física genera fricciones constantes por falta de inmediatez. Al revisar soluciones existentes en el mercado, notó que resultaban poco intuitivas y recargadas de módulos innecesarios. Al abordar el ámbito de infraestructura e IoT, subraya que la coordinación del mantenimiento físico representa un reto: frecuentemente hay quejas por áreas verdes secas o mal regadas por olvidos de conserjería, así como luminarias de pasadizos encendidas permanentemente que elevan los recibos de luz comunes. Apoya firmemente contar con un panel donde el administrador pueda auditar y configurar parámetros de riego automatizado, monitorear sensores lumínicos y revisar el historial de aperturas de cerraduras inteligentes en áreas sociales y accesos principales, manteniendo estos registros en el ámbito exclusivo de la administración para asegurar la privacidad y el orden del condominio. |

**Segmento objetivo: Propietarios e Inquilinos:**

| **ENTREVISTA 1** | |
|---|---|
| **Nombre entrevistado** | Melina López |
| **Edad** | 51 años |
| **Distrito** | San Miguel |
| **Fecha y hora** | 18 de septiembre de 2026 – 03:00 p. m. |
| **Duración** | 00:02:26 |
| **Link del video** | [Ver video de la entrevista](https://upcedupe-my.sharepoint.com/personal/u202310358_upc_edu_pe/_layouts/15/stream.aspx?id=%2Fpersonal%2Fu202310358%5Fupc%5Fedu%5Fpe%2FDocuments%2Fentrevista%5Fsegmento%5Fobjetivo%5Fpropietarios%2Emp4&nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJPbmVEcml2ZUZvckJ1c2luZXNzIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXciLCJyZWZlcnJhbFZpZXciOiJNeUZpbGVzTGlua0NvcHkifX0&ga=1&referrer=StreamWebApp%2EWeb&referrerScenario=AddressBarCopied%2Eview%2E90d21b78%2D17c7%2D47e6%2D9d8c%2D754be308c3c6) |
| **Foto entrevista** | <img src="assets/img/interviews/prop2.png" alt="Melina López" /> |
| **Resumen** | Melina es propietaria y señala que sus obligaciones laborales le impiden asistir a las reuniones presenciales. Realiza sus pagos bancarios y envía el comprobante por correo electrónico, guardando copias físicas en casa ante la falta de una plataforma que conserve su historial contable. Indica que la reserva de áreas comunes es un proceso engorroso por la gestión manual de garantías y la falta de un calendario en tiempo real. En el ámbito de la convivencia y el entorno físico, resalta que a menudo las luces de los pasillos permanecen encendidas de día o apagadas cuando se necesitan de noche; por ello, ve de gran utilidad que existan sensores de movimiento que funcionen solos. Asimismo, valora positivamente que el riego de jardines sea programado y automático para no depender de la voluntad del personal de turno, y considera prudente que el uso de cerraduras inteligentes agilice el acceso a las áreas del edificio sin que los residentes tengan que lidiar con configuraciones técnicas complejas ni acceso a historiales ajenos. |

| **ENTREVISTA 2** | |
|---|---|
| **Nombre entrevistado** | Jarol Panduro |
| **Edad** | 30 años |
| **Distrito** | San Miguel |
| **Fecha y hora** | 19 de septiembre de 2026 – 07:15 p. m. |
| **Duración** | 00:03:48 |
| **Link del video** | [Ver video de la entrevista](https://youtu.be/NHYPQzPL36M) |
| **Foto entrevista** | <img src="assets/img/ser1.jpeg" alt="Jarol Panduro" /> |
| **Resumen** | Jarol, abogado de profesión, cuestiona la falta de modernización en la gestión de su edificio. Remitir capturas de pantalla por mensajería instantánea para certificar el pago de mantenimiento le resulta ineficiente y propenso a extravío de información. Manifiesta su disconformidad con el registro manual de visitas y paquetería en libretas físicas en la portería, el cual considera inseguro y lento. Sugiere la incorporación de cerraduras inteligentes y control de accesos centralizado gestionado por la administración para optimizar el ingreso de personas autorizadas. También menciona el gasto recurrente e injustificado en consumos comunes de agua y energía eléctrica, manifestando que un sistema de iluminación inteligente activado por sensores y un riego tecnificado resolverían el desperdicio en las áreas comunes. Subraya que la administración debe ser quien configure y supervise estos equipos, garantizando que el residente solo perciba una experiencia ágil, segura y libre de trámites manuales. |

| **ENTREVISTA 3** | |
|---|---|
| **Nombre entrevistado** | Marcelo Candia |
| **Edad** | 25 años |
| **Distrito** | San Miguel |
| **Fecha y hora** | 19 de septiembre de 2026 – 08:30 p. m. |
| **Duración** | 00:05:26 minutos |
| **Link del video** | [Ver video de la entrevista](https://youtu.be/E5k60PHyvYI) |
| **Foto entrevista** | <img src="assets/img/ser2.jpeg" alt="Marcelo Candia" /> |
| **Resumen** | Marcelo expresa su insatisfacción por el uso obligatorio de recibos físicos y canales de pago tradicionales, reclamando la integración de pagos digitales instantáneos. Señala recurrentes empalmes de horarios y discusiones en la reserva de áreas sociales debido a la falta de un sistema digital transparente. En cuanto a las instalaciones físicas del edificio, critica que el proceso para autorizar mudanzas o visitas dependa enteramente de autorizaciones en papel en la entrada, sugiriendo cerraduras inteligentes con códigos o validación digital controladas por la administración. Igualmente, opina que la automatización de la iluminación en escaleras y cocheras mediante sensores evitaría el desperdicio eléctrico, y que el riego automático mantendría las áreas verdes sin elevar los costos de mantenimiento. Afirma que el inquilino o propietario debe disfrutar de estos servicios sin acceso a las consolas o registros técnicos internos, los cuales corresponden a la esfera de control del administrador. |

---

### 2.2.3. Análisis de entrevistas

##### 1. Segmento: Administradores de edificios y condominios
Las entrevistas sostenidas con **César Villalobos (15 edificios)**, **Alejandro Galindo (4 edificios)** y **Kattya Valentina (15 edificios)** demuestran que el modelo de administración actual presenta una alta dependencia de herramientas genéricas (hojas de cálculo con macros complejas, mensajería instantánea de WhatsApp y cuadernos físicos en portería). Esta fragmentación operativa da lugar a tres problemas centrales: la lentitud en la conciliación de cuotas de mantenimiento, la falta de confirmación de lectura de los comunicados institucionales y la sobrecarga que implica tramitar solicitudes de reserva y cobros en papel.

En lo relativo a la modernización de infraestructura e integración de **tecnología IoT**, los tres administradores concuerdan en que la supervisión de los condominios debe evolucionar hacia la automatización:
- **Control de accesos inteligentes:** Coinciden en la vulnerabilidad de las libretas de visitas tradicionales y la pérdida de llaves físicas; respaldan la implementación de cerraduras inteligentes y registro de visitas cuya auditoría y asignación de permisos recaiga en la administración.
- **Sensores de iluminación:** Identifican que las luminarias encendidas de forma continua representan uno de los costos comunes más cuestionados por las juntas; valoran monitorear sensores de presencia que enciendan las luces solo ante movimiento para reducir el consumo general.
- **Riego automatizado:** Reconocen que las quejas por deterioro de áreas verdes o exceso de gasto de agua se originan por el descuido en el riego manual. Consideran fundamental monitorear los ciclos y cronogramas de riego desde su panel administrativo.

Los administradores enfatizan un requerimiento arquitectónico clave: **la administración debe retener el acceso exclusivo a los registros, alertas y configuraciones de estos dispositivos**, de modo que los residentes experimenten los beneficios (seguridad, espacios iluminados y áreas verdes en buen estado) sin tener acceso a configuraciones técnicas ni a las bitácoras privadas de acceso de todo el inmueble. Asimismo, exigen que la plataforma unificada sea limpia, intuitiva y mantenga costos acordes al mercado inmobiliario (entre 2 y 5 USD mensuales por departamento).

##### 2. Segmento: Propietarios e inquilinos
Las entrevistas efectuadas a **Melina López**, **Jarol Panduro** y **Marcelo Candia** confirman un malestar extendido con los procedimientos tradicionales de gestión de edificios. En el aspecto financiero, los residentes resienten la obligación de enviar capturas de transferencias por correo o WhatsApp y la ausencia de un historial digital accesible donde puedan verificar saldos históricos, lo que los obliga a archivar recibos impresos por precaución. En cuanto a la convivencia, señalan que los grupos vecinales de mensajería están saturados de reclamos informales que diluyen los avisos importantes, mientras que la reserva de áreas comunes genera fricción por la falta de calendarios en tiempo real y la engorrosa devolución de garantías.

En lo concerniente a los **servicios e infraestructura tecnológica (IoT)**:
- **Accesos y seguridad:** Critican la lentitud e informalidad del registro manual en portería para visitas, servicios de entrega y mudanzas; valoran la presencia de cerraduras y accesos inteligentes que agilicen la validación de ingreso.
- **Iluminación automatizada:** Consideran indispensable el empleo de sensores de presencia en áreas de tránsito común (pasadizos, estacionamientos y escaleras), reduciendo costos innecesarios en la factura común y garantizando iluminación inmediata al transitar.
- **Riego inteligente:** Perciben el cuidado de las áreas verdes como un factor clave para el valor de su vivienda; apoyan sistemas tecnificados que eviten el desperdicio de agua y mantengan los jardines saludables.
- **Rol y experiencia de usuario:** Los entrevistados señalan que no desean encargarse de la configuración, mantenimiento ni revisión de bitácoras de los equipos IoT; esperan que sea la administración quien garantice su correcto funcionamiento, mientras que ellos disfrutan de las instalaciones mediante una aplicación móvil ágil, transparente y operativa las 24 horas del día.


## 2.3. Needfinding
### 2.3.1. User Personas

### Administrador de Condominio – Ricardo Mendoza

![User Personas](assets/img/Ricardo_Mendoza.png)

*Figura. User persona del administrador de condominio. Elaborado por el equipo utilizando UXPressia (UXPressia, s.f.).*

### Residente (Propietario/Inquilino) – Andrea Villacorta

![User Personas](assets/img/Andrea_Villacorta.png)

*Figura. User persona del residente. Elaborado por el equipo utilizando UXPressia (UXPressia, s.f.).*

### 2.3.2. User Task Matrix

### Administrador de Condominio – Ricardo Mendoza

| Tarea | Frecuencia | Prioridad | Frustración |
| :--- | :--- | :--- | :--- |
| Conciliar pagos y validar transferencias | Diario | Muy Alta | Alta |
| Actualizar el estado de saldos pendientes | Diario | Alta | Alta |
| Enviar comunicados oficiales masivos | Semanal | Alta | Media |
| Gestionar y aprobar reservas de áreas comunes | Diario | Media | Media |
| Generar reportes financieros mensuales | Mensual | Muy Alta | Alta |
| Registrar gastos y facturas del edificio | Semanal | Alta | Media |
| Identificar deudores críticos para cobranza | Semanal | Alta | Media |

### Residente (Propietario/Inquilino) – Andrea Villacorta

| Tarea | Frecuencia | Prioridad | Frustración |
| :--- | :--- | :--- | :--- |
| Consultar monto exacto de cuota del mes | Mensual | Muy Alta | Media |
| Subir el comprobante de pago realizado | Mensual | Alta | Alta |
| Verificar disponibilidad de áreas comunes | Ocasional | Media | Alta |
| Realizar una reserva (parrilla, SUM, etc.) | Ocasional | Media | Media |
| Leer notificaciones de mantenimiento | Semanal | Alta | Media |
| Revisar el estado de cuenta histórico | Semanal | Media | Alta |
| Reportar una avería o incidencia | Ocasional | Alta | Alta |

### 2.3.3. User Journey Mapping

Primer Segmento:

<img src="assets/img/j1.png" alt="logo" /> 

Segundo Segmento:


<img src="assets/img/j2.png" alt="logo" /> 

### 2.3.4. Empathy Mapping

### Administrador de Condominio – Ricardo Mendoza

![Empathy Mapping](assets/img/Ricardo_empathy_map.png)

 *Figura. Empathy mapping del administrador de condominio. Elaborado por el equipo utilizando UXPressia (UXPressia, s.f.).*


### Residente (Propietario/Inquilino) – Andrea Villacorta

![Empathy Mapping](assets/img/Andrea_empathy_map.png)

*Figura. Empathy mapping del residente. Elaborado por el equipo utilizando UXPressia (UXPressia, s.f.).*

## 2.4. Big Picture EventStorming

En esta sección se presenta el resultado de la sesión de Big Picture EventStorming, técnica de modelado colaborativo que reconstruye el funcionamiento de un negocio a partir de los hechos relevantes que ocurren en él. La sesión se enfocó en comprender el dominio general de la administración de condominios: el equipo registró en post-its naranjas los eventos de dominio significativos del flujo operativo, redactados en tiempo pasado, como Deuda generada, Reserva aceptada, Tarjeta reconocida o Luces encendidas automáticamente. Este mapeo permitió identificar los hechos clave de la operación diaria del edificio y agruparlos luego en bloques funcionales lógicos, asegurando que la solución tecnológica responda a los requisitos reales del flujo operativo.

![Big Picture EventStorming](assets/img/big-picture-eventstorming.png)

*Figura. Big Picture EventStorming de Edifika. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

## 2.5 Ubiquitous Language

El Ubiquitous Language define un lenguaje común entre el equipo y los actores del negocio, de modo que los mismos términos se usen en las conversaciones, la documentación y el código. En este proyecto integra conceptos de administración de condominios y de automatización mediante IoT.

### Usuarios

- **Visitante:** persona anónima que consulta el Landing Page para conocer el modelo de negocio y los precios antes de registrarse.
- **Administrador:** persona responsable de la operación de uno o varios edificios. Gestiona residentes, unidades, deudas, pagos, reservas, comunicados, reportes y reglas IoT desde la aplicación web.
- **Residente (Propietario o Inquilino):** persona vinculada a una unidad que, desde la aplicación móvil, consulta y paga deudas, reserva áreas comunes, lee comunicados, participa del foro y accede a las áreas comunes con su tarjeta RFID.

### Gestión del condominio

- **Edificio:** conjunto de unidades residenciales administradas en la plataforma.
- **Unidad:** departamento asignado a uno o varios residentes dentro de un edificio.
- **Área común:** espacio compartido por los residentes, como salón de eventos, gimnasio o zona de parrillas.
- **Regla de área común:** condición que define el uso de un área común, como su aforo máximo o el tipo de reserva permitido.
- **Reserva:** solicitud de un residente para usar un área común en una fecha y horario determinados. Puede estar solicitada, aceptada, rechazada o cancelada.
- **Deuda:** monto que una unidad debe pagar por un periodo de mantenimiento, con fecha de vencimiento.
- **Deuda vencida:** deuda que no se pagó antes de su fecha de vencimiento.
- **Residente moroso:** residente con al menos una deuda vencida. Su acceso a las áreas comunes queda restringido.
- **Pago:** abono que realiza un residente para cancelar una deuda.
- **Pago en línea:** pago con tarjeta, Yape o billetera móvil procesado a través de la pasarela de pagos.
- **Pasarela de pagos:** servicio externo que procesa los cobros en línea (Culqi).
- **Comprobante de pago:** imagen del voucher que el residente adjunta cuando paga fuera de línea, y que el administrador revisa.
- **Constancia de pago:** documento que el sistema emite cuando un pago es aprobado.
- **Estado de cuenta:** resumen de las deudas pendientes y los pagos realizados de una unidad.
- **Historial de pagos:** registro de todos los pagos efectuados por el residente.
- **Comunicado:** anuncio oficial emitido por la administración para informar novedades o disposiciones.
- **Foro:** espacio privado de cada edificio donde los residentes publican y comentan.
- **Publicación:** mensaje que un residente comparte en el foro, con texto e imagen opcional.
- **Notificación:** mensaje push enviado a un residente o administrador para informar un evento relevante.
- **Reporte financiero:** documento que resume ingresos, deudas pendientes y morosidad del edificio.

### IoT

- **Dispositivo IoT:** equipo físico instalado en el edificio que mide variables del entorno o ejecuta acciones. Puede estar activo, inactivo, desconectado o en mantenimiento.
- **Edge Gateway:** equipo instalado en el condominio que coordina los dispositivos y sigue operando aunque se caiga el internet.
- **Control de accesos:** mecanismo que autoriza o deniega el ingreso a un área común.
- **Tarjeta RFID:** credencial física que el residente presenta en el lector para acceder a un área común.
- **Credencial activa:** tarjeta RFID habilitada para un residente y un área común en un horario determinado.
- **Acceso concedido / denegado:** resultado de validar una tarjeta RFID contra los permisos, la reserva vigente y la morosidad del residente.
- **Iluminación inteligente:** encendido y apagado automático de las luces de áreas comunes según presencia, luz ambiental y horarios de reserva.
- **Sensor de presencia:** sensor PIR que detecta movimiento de personas en un área común.
- **Nivel de lux:** cantidad de luz ambiental medida por el sensor LDR.
- **Temporizador de inactividad:** tiempo sin movimiento tras el cual las luces se apagan.
- **Riego automático:** activación del riego de áreas verdes según horarios programados o la humedad del suelo.
- **Humedad del suelo:** porcentaje de agua en la tierra medido por el sensor capacitivo.
- **Umbral de humedad:** valor de humedad por debajo del cual se activa el riego.
- **Override manual:** acción del administrador que anula temporalmente una regla automática de iluminación o riego.
- **Regla de automatización:** condición configurada que dispara una acción automática a partir de lo que detecta un sensor.
- **Telemetría:** datos que los dispositivos envían periódicamente, como presencia, lux, corriente, humedad y flujo de agua.
- **Consumo de recursos:** energía (kWh) y agua consumidas en las áreas comunes, calculadas a partir de la telemetría.
- **Anomalía:** consumo o lectura fuera de los parámetros esperados.
- **Falla de dispositivo:** pérdida de conexión o mal funcionamiento detectado en un dispositivo IoT.
- **Log de dispositivo:** registro cronológico de los eventos generados por un dispositivo.
- **Dashboard IoT:** panel de la aplicación web donde el administrador ve el estado de los dispositivos y el consumo de recursos.


# Capítulo III: Requirements Specification

## 3.1. User Stories

En esta sección se presentan las épicas, user stories y technical stories de Edifika. Se definen épicas que agrupan user stories y technical stories, alineadas con los bounded contexts de la solución. Cada historia se redacta desde la perspectiva de su rol: administrador, residente (propietario o inquilino), visitante para las funcionalidades de la landing page, sistema para los procesos automáticos de IoT y developer para las technical stories. Los criterios de aceptación siguen el formato Gherkin (Dado que – Cuando – Entonces), redactados en tercera persona y tiempo presente, e incluyen tanto el escenario exitoso como los casos de error, de modo que cada uno pueda verificarse con una prueba concreta.


| Epic ID | Título | Descripción | User Stories Asociadas |
|---------|--------|-------------|------------------------|
| EP01 | Autenticación y gestión de usuarios | Esta épica se enfoca en el registro y la administración de usuarios de la plataforma. El administrador se registra por sí mismo, mientras que los residentes son registrados por el administrador al vincularlos con su unidad. Incluye el inicio de sesión, la edición de datos y la activación o desactivación de cuentas. | US01, US02, US03, US04, US05 |
| EP02 | Comunicación centralizada | Esta épica aborda la publicación de comunicados oficiales y el foro comunitario del edificio, permitiendo mantener informados a los residentes y fomentar la interacción entre ellos. Incluye el seguimiento de lectura de comunicados y la moderación del foro. | US06, US07, US08, US09, US10 |
| EP03 | Gestión de áreas comunes | Esta épica se centra en la administración y el uso eficiente de las áreas comunes del edificio. Permite a los residentes consultar disponibilidad, solicitar y cancelar reservas, mientras que los administradores configuran las reglas de cada área, aprueban solicitudes y evitan conflictos de horario. | US11, US12, US13, US14, US15, US16 |
| EP04 | Gestión financiera y reportes | Esta épica se enfoca en la administración económica del edificio, permitiendo a los residentes consultar su deuda, pagar en línea o con comprobante y revisar su historial. Los administradores pueden registrar pagos, resolver pagos en verificación, identificar morosos y generar reportes financieros. | US17, US18, US19, US20, US21, US22, US23, US24, US25 |
| EP05 | Infraestructura, seguridad y arquitectura técnica | Esta épica abarca los aspectos técnicos necesarios para el funcionamiento de Edifika: configuración de microservicios, autenticación JWT, API Gateway, base de datos por microservicio, documentación de APIs, comunicación entre servicios, mensajería de eventos, Edge Gateway y despliegue. Su objetivo es garantizar que la plataforma sea segura, escalable y mantenible. | TS01, TS02, TS03, TS04, TS05, TS06, TS07, TS08, TS09, TS10, TS11, TS12, TS13, TS14, TS15, TS16, TS17, TS18, TS19, TS20, TS21, TS22, TS23, TS24, TS25, TS26, TS27, TS28, TS29, TS30, TS31, TS32 |
| EP06 | Landing Page e Interfaz Web | Esta épica cubre las funcionalidades de la landing page pública de Edifika: presentación de la propuesta de valor, navegación entre secciones, funcionalidades del producto y acceso a la aplicación web o móvil según el segmento del visitante. | US26, US27, US28 |
| EP07 | Control de accesos y riego automático | Esta épica abarca el control de acceso a las áreas comunes mediante tarjetas RFID, combinando reservas vigentes y estado de morosidad, y el riego automático de las áreas verdes según horarios programados y la humedad del suelo. Permite al administrador auditar los accesos, abrir accesos de forma remota y controlar manualmente el riego. | US29, US30, US31, US32, US33, US34, US35, US36 |
| EP08 | Iluminación inteligente y automatización | Esta épica abarca la automatización de la iluminación de áreas comunes mediante reglas configurables (presencia, lux, horario y prioridad), el encendido al iniciar una reserva y el control manual temporal (override), buscando mejorar la seguridad y reducir el consumo energético. | US37, US38, US39, US40 |
| EP09 | Telemetría y analítica IoT | Esta épica cubre la ingesta, almacenamiento y análisis de las lecturas de los sensores. Permite al administrador visualizar el consumo de energía y agua, recibir alertas de consumo anómalo y fallas de dispositivos, y monitorear el estado de conexión de los dispositivos. | US41, US42, US43, US44 |
| EP10 | Edge Gateway e integración con dispositivos ESP32 | Esta épica abarca el servicio Edge Gateway (Python, Flask, Peewee ORM y SQLite) que se ejecuta en el edificio y se comunica por MQTT local con los nodos ESP32 (lector RFID, cerradura eléctrica, buzzer, pantalla OLED, sensor PIR, sensor LDR, sensor de corriente ACS712, sensor de humedad del suelo, sensor de flujo y válvula solenoide). Resuelve accesos con una caché local, opera sin conexión a internet y se sincroniza con la nube. | US45, US46, US47, US48, US49, US50 |

**User Stories:**

<table>
  <thead>
    <tr>
      <th>Epic / Story ID</th>
      <th>Título</th>
      <th>Descripción</th>
      <th>Criterios de Aceptación (Escenarios)</th>
      <th>Relacionado</th>
    </tr>
  </thead>
  <tbody>

<tr>
  <td><strong>US01</strong></td>
  <td>Registrar residente y vincularlo a su unidad</td>
  <td>Como administrador, quiero registrar a un residente y vincularlo a su unidad para que pueda acceder a la aplicación móvil de su edificio.</td>
  <td>
    <strong>Escenario 1: Vinculación exitosa.</strong><br>
    Dado que el administrador ingresa los datos del residente y selecciona su torre y unidad,<br>
    cuando confirma el registro,<br>
    entonces el sistema vincula al residente con la unidad, crea su usuario con rol RESIDENT y le envía sus credenciales de acceso por correo.<br><br>
    <strong>Escenario 2: Unidad con titular activo.</strong><br>
    Dado que el administrador selecciona una unidad que ya tiene un titular activo,<br>
    cuando intenta registrar a un nuevo titular,<br>
    entonces el sistema bloquea el registro e indica "La unidad ya tiene un titular activo".<br><br>
    <strong>Escenario 3: Correo ya registrado.</strong><br>
    Dado que el correo ingresado ya pertenece a otro usuario,<br>
    cuando el administrador intenta completar el registro,<br>
    entonces el sistema muestra "El correo ya está registrado" sin crear el usuario.
  </td>
  <td>EP01</td>
</tr>

<tr>
  <td><strong>US02</strong></td>
  <td>Inicio de sesión</td>
  <td>Como usuario, quiero iniciar sesión para acceder a mi información.</td>
  <td>
    <strong>Escenario 1: Login exitoso.</strong><br>
    Dado que el usuario tiene credenciales válidas,<br>
    cuando las ingresa y confirma el inicio de sesión,<br>
    entonces el sistema lo redirige al dashboard correspondiente según su rol (Admin en la web, Residente en la app móvil).<br><br>
    <strong>Escenario 2: Bloqueo por intentos.</strong><br>
    Dado que el usuario ha ingresado credenciales incorrectas,<br>
    cuando acumula 5 intentos fallidos,<br>
    entonces el sistema bloquea la cuenta por 15 minutos por razones de seguridad.<br><br>
    <strong>Escenario 3: Sesión expirada.</strong><br>
    Dado que el token JWT del usuario ha caducado,<br>
    cuando intenta navegar dentro de la plataforma,<br>
    entonces el sistema lo redirige al login con el mensaje "Su sesión ha expirado".
  </td>
  <td>EP01</td>
</tr>

<tr>
  <td><strong>US03</strong></td>
  <td>Actualizar información de usuarios</td>
  <td>Como administrador, quiero editar datos de usuarios para corregir errores.</td>
  <td>
    <strong>Escenario 1: Edición de contacto.</strong><br>
    Dado que el admin accede al perfil de un residente,<br>
    cuando modifica el número de teléfono y guarda los cambios,<br>
    entonces el sistema almacena la información y registra en el log quién realizó el cambio.<br><br>
    <strong>Escenario 2: Cambio de rol inválido.</strong><br>
    Dado que el admin es el único administrador activo del sistema,<br>
    cuando intenta quitarse sus propios permisos de administrador,<br>
    entonces el sistema lanza "Error: Debe existir al menos un administrador activo".<br><br>
    <strong>Escenario 3: Fallo de persistencia.</strong><br>
    Dado que el admin intenta guardar cambios en un perfil,<br>
    cuando la base de datos se encuentra en mantenimiento,<br>
    entonces el sistema muestra "Error 500: No se pudieron guardar los cambios".
  </td>
  <td>EP01</td>
</tr>

<tr>
  <td><strong>US04</strong></td>
  <td>Registrar edificio y unidades</td>
  <td>Como administrador, quiero configurar la estructura del edificio (torres/unidades).</td>
  <td>
    <strong>Escenario 1: Configuración inicial.</strong><br>
    Dado que el admin ingresa la configuración del edificio,<br>
    cuando registra 2 torres con 20 departamentos cada una,<br>
    entonces el sistema genera IDs únicos para cada unidad automáticamente.<br><br>
    <strong>Escenario 2: Unidades duplicadas.</strong><br>
    Dado que el admin intenta registrar una unidad,<br>
    cuando el "Dpto 101" ya existe en la misma torre,<br>
    entonces el sistema arroja "Error: Identificador de unidad ya existe".<br><br>
    <strong>Escenario 3: Interrupción de carga masiva.</strong><br>
    Dado que el admin está subiendo un Excel de unidades,<br>
    cuando el proceso se interrumpe inesperadamente,<br>
    entonces el sistema indica cuál fue la última fila procesada exitosamente.
  </td>
  <td>EP01</td>
</tr>

<tr>
  <td><strong>US05</strong></td>
  <td>Activar/Desactivar cuentas</td>
  <td>Como administrador, quiero controlar quién tiene acceso a la app.</td>
  <td>
    <strong>Escenario 1: Desactivación por mudanza.</strong><br>
    Dado que un residente se ha mudado del edificio,<br>
    cuando el admin inactiva su cuenta,<br>
    entonces las credenciales del residente y su tarjeta RFID dejan de funcionar al instante.<br><br>
    <strong>Escenario 2: Reactivación.</strong><br>
    Dado que el admin habilita una cuenta suspendida,<br>
    cuando confirma la reactivación,<br>
    entonces el sistema envía automáticamente un correo: "Tu cuenta ha sido reactivada".<br><br>
    <strong>Escenario 3: Error al desactivar Admin.</strong><br>
    Dado que el sistema tiene un único administrador activo,<br>
    cuando se intenta desactivar esa cuenta,<br>
    entonces el sistema impide la acción por razones de seguridad.
  </td>
  <td>EP01</td>
</tr>

<tr>
  <td><strong>US06</strong></td>
  <td>Recibir y consultar comunicados</td>
  <td>Como residente, quiero recibir y consultar la información oficial del condominio.</td>
  <td>
    <strong>Escenario 1: Lectura de acta.</strong><br>
    Dado que el admin publica el acta de una junta,<br>
    cuando el residente recibe el aviso,<br>
    entonces puede abrir y leer el PDF directamente desde la app.<br><br>
    <strong>Escenario 2: Filtro de relevancia.</strong><br>
    Dado que el admin publica un aviso dirigido únicamente a "Torre A",<br>
    cuando el comunicado es enviado,<br>
    entonces los residentes de "Torre B" no reciben el mensaje.<br><br>
    <strong>Escenario 3: Historial de comunicados.</strong><br>
    Dado que el residente accede al historial de comunicados,<br>
    cuando filtra por un mes,<br>
    entonces el sistema lista los comunicados de ese período en orden cronológico o muestra "No hay comunicados para este periodo" si no existen.
  </td>
  <td>EP02</td>
</tr>

<tr>
  <td><strong>US07</strong></td>
  <td>Publicar comunicados oficiales</td>
  <td>Como administrador, quiero difundir noticias a la comunidad.</td>
  <td>
    <strong>Escenario 1: Publicación con adjunto.</strong><br>
    Dado que el admin redacta un comunicado con el presupuesto anual adjunto,<br>
    cuando lo publica,<br>
    entonces el sistema lo distribuye a todos los perfiles activos.<br><br>
    <strong>Escenario 2: Borrador de comunicado.</strong><br>
    Dado que el admin está redactando un comunicado,<br>
    cuando lo guarda como borrador,<br>
    entonces el sistema lo mantiene oculto para los residentes hasta su publicación.<br><br>
    <strong>Escenario 3: Error de formato.</strong><br>
    Dado que el admin intenta adjuntar un archivo al comunicado,<br>
    cuando el archivo supera los 10MB,<br>
    entonces el sistema indica "El archivo excede el límite permitido (10MB)".
  </td>
  <td>EP02</td>
</tr>

<tr>
  <td><strong>US08</strong></td>
  <td>Seguimiento de visualización de comunicados</td>
  <td>Como administrador, quiero saber quién ha visto los comunicados para asegurar su alcance.</td>
  <td>
    <strong>Escenario 1: Visualización del registro.</strong><br>
    Dado que el admin accede a un comunicado publicado,<br>
    cuando revisa el panel de seguimiento,<br>
    entonces el sistema muestra la lista de residentes que lo han leído con fecha y hora de lectura.<br><br>
    <strong>Escenario 2: Residentes que no han leído.</strong><br>
    Dado que el admin consulta el seguimiento de un comunicado,<br>
    cuando filtra por "No leído",<br>
    entonces el sistema lista los residentes que aún no han abierto el comunicado y permite reenviar la notificación.<br><br>
    <strong>Escenario 3: Error de carga del registro.</strong><br>
    Dado que el admin intenta ver el seguimiento de visualizaciones,<br>
    cuando el servicio de base de datos tarda en responder,<br>
    entonces el sistema muestra un "Skeleton loader" mientras recupera los datos.
  </td>
  <td>EP02</td>
</tr>

<tr>
  <td><strong>US09</strong></td>
  <td>Publicar mensaje en la comunidad</td>
  <td>Como residente, quiero escribir en el foro de mi edificio.</td>
  <td>
    <strong>Escenario 1: Publicación exitosa.</strong><br>
    Dado que el residente redacta un mensaje en el foro de su edificio,<br>
    cuando lo publica,<br>
    entonces el sistema lo muestra en el feed de la comunidad.<br><br>
    <strong>Escenario 2: Límite diario.</strong><br>
    Dado que el residente ya publicó un mensaje en el día,<br>
    cuando intenta publicar un segundo mensaje,<br>
    entonces el sistema bloquea la acción indicando "Máximo 1 post por día".<br><br>
    <strong>Escenario 3: Filtro de palabras.</strong><br>
    Dado que el residente redacta un mensaje con contenido inapropiado,<br>
    cuando intenta publicarlo,<br>
    entonces el sistema detecta las palabras prohibidas y bloquea la publicación.
  </td>
  <td>EP02</td>
</tr>

<tr>
  <td><strong>US10</strong></td>
  <td>Moderar publicaciones del foro</td>
  <td>Como administrador, quiero ocultar publicaciones inapropiadas del foro para mantener un ambiente respetuoso.</td>
  <td>
    <strong>Escenario 1: Publicación ocultada.</strong><br>
    Dado que el admin detecta una publicación con contenido inapropiado,<br>
    cuando la oculta desde el panel de moderación,<br>
    entonces la publicación desaparece del feed y el autor recibe una notificación con el motivo.<br><br>
    <strong>Escenario 2: Publicación ya oculta.</strong><br>
    Dado que la publicación ya fue ocultada,<br>
    cuando el admin intenta ocultarla nuevamente,<br>
    entonces el sistema retorna 409 sin modificar el registro.<br><br>
    <strong>Escenario 3: Usuario sin permiso.</strong><br>
    Dado que un residente intenta ocultar la publicación de otro residente,<br>
    cuando envía la solicitud,<br>
    entonces el sistema retorna 403 con "No tienes permiso para moderar el foro".
  </td>
  <td>EP02</td>
</tr>

<tr>
  <td><strong>US11</strong></td>
  <td>Notificaciones de reservas</td>
  <td>Como residente o administrador, quiero recibir avisos sobre las reservas de áreas comunes.</td>
  <td>
    <strong>Escenario 1: Confirmación al residente.</strong><br>
    Dado que el administrador aprueba la reserva de un residente en el gimnasio,<br>
    cuando el sistema procesa la aprobación,<br>
    entonces envía una notificación al residente confirmando el día y la hora reservados.<br><br>
    <strong>Escenario 2: Recordatorio de uso.</strong><br>
    Dado que el residente tiene una reserva activa,<br>
    cuando falta 1 hora para el inicio del turno,<br>
    entonces el sistema envía el aviso: "Tu turno en el área común inicia pronto".<br><br>
    <strong>Escenario 3: Aviso al administrador.</strong><br>
    Dado que un residente solicita una reserva en el área de parrillas,<br>
    cuando la solicitud es registrada,<br>
    entonces el admin recibe un push: "Reserva nueva en Área Parrillas - Dpto 501".
  </td>
  <td>EP03</td>
</tr>

<tr>
  <td><strong>US12</strong></td>
  <td>Ver disponibilidad de áreas comunes</td>
  <td>Como residente o administrador, quiero ver qué áreas están libres.</td>
  <td>
    <strong>Escenario 1: Consulta de calendario.</strong><br>
    Dado que el usuario accede al área "Piscina",<br>
    cuando visualiza el calendario,<br>
    entonces puede ver los bloques de 1 hora disponibles y ocupados.<br><br>
    <strong>Escenario 2: Área fuera de servicio.</strong><br>
    Dado que el admin marca el "Gimnasio" como inactivo,<br>
    cuando un residente consulta la disponibilidad,<br>
    entonces ve el área sombreada con el mensaje "Mantenimiento".<br><br>
    <strong>Escenario 3: Actualización en tiempo real.</strong><br>
    Dado que dos usuarios consultan el mismo horario simultáneamente,<br>
    cuando uno de ellos completa una reserva,<br>
    entonces el sistema actualiza la disponibilidad en tiempo real para el otro usuario sin recargar la página.<br><br>
    <strong>Escenario 4: Vista global del administrador.</strong><br>
    Dado que el admin accede al panel de disponibilidad global,<br>
    cuando consulta el día actual,<br>
    entonces puede ver qué áreas están ocupadas en todo el edificio.
  </td>
  <td>EP03</td>
</tr>

<tr>
  <td><strong>US13</strong></td>
  <td>Reservar área común</td>
  <td>Como residente, quiero separar un espacio para uso personal sin cruces de horario.</td>
  <td>
    <strong>Escenario 1: Reserva solicitada.</strong><br>
    Dado que el residente selecciona un horario disponible,<br>
    cuando confirma la reserva,<br>
    entonces el sistema la registra como solicitada y queda pendiente de aprobación del administrador.<br><br>
    <strong>Escenario 2: Cruce de horarios.</strong><br>
    Dado que el residente intenta reservar un área común,<br>
    cuando el horario seleccionado ya está tomado,<br>
    entonces el sistema indica "Horario no disponible, elija otro".<br><br>
    <strong>Escenario 3: Reserva simultánea.</strong><br>
    Dado que dos residentes intentan reservar el mismo horario al mismo tiempo,<br>
    cuando ambos confirman la reserva,<br>
    entonces el sistema otorga la reserva al primero en confirmar y notifica al segundo que el horario ya no está disponible.<br><br>
    <strong>Escenario 4: Límite de reservas.</strong><br>
    Dado que el residente ya alcanzó el máximo de reservas diarias,<br>
    cuando intenta realizar una nueva reserva en el mismo día,<br>
    entonces el sistema bloquea la acción indicando "Límite diario de reservas alcanzado".
  </td>
  <td>EP03</td>
</tr>

<tr>
  <td><strong>US14</strong></td>
  <td>Aprobar o rechazar reservas</td>
  <td>Como administrador, quiero aprobar o rechazar reservas de áreas comunes para mantener el control sobre su uso.</td>
  <td>
    <strong>Escenario 1: Aprobación exitosa.</strong><br>
    Dado que el admin recibe una solicitud de reserva pendiente,<br>
    cuando la aprueba desde el panel de administración,<br>
    entonces el sistema confirma la reserva, habilita el acceso RFID del residente para ese horario y le notifica la aprobación.<br><br>
    <strong>Escenario 2: Rechazo con motivo.</strong><br>
    Dado que el admin decide rechazar una solicitud de reserva,<br>
    cuando ingresa el motivo y confirma el rechazo,<br>
    entonces el sistema libera el horario y notifica al residente indicando el motivo del rechazo.<br><br>
    <strong>Escenario 3: Solicitud expirada.</strong><br>
    Dado que el admin accede a una solicitud de reserva pendiente,<br>
    cuando la fecha y hora solicitada ya pasó sin ser procesada,<br>
    entonces el sistema la marca automáticamente como "Expirada" y la excluye de la lista de pendientes.
  </td>
  <td>EP03</td>
</tr>

<tr>
  <td><strong>US15</strong></td>
  <td>Cancelar reserva</td>
  <td>Como residente o administrador, quiero cancelar una reserva para liberar el espacio.</td>
  <td>
    <strong>Escenario 1: Cancelación a tiempo.</strong><br>
    Dado que el residente desea cancelar su reserva,<br>
    cuando lo hace con al menos 24 horas de anticipación,<br>
    entonces el sistema libera el cupo, revoca el permiso de acceso asociado y notifica la disponibilidad.<br><br>
    <strong>Escenario 2: Cancelación tardía.</strong><br>
    Dado que el residente intenta cancelar una reserva,<br>
    cuando lo hace faltando menos de 24 horas para el turno,<br>
    entonces el sistema indica "Plazo de cancelación vencido, contacte al administrador".<br><br>
    <strong>Escenario 3: Cancelación por el administrador.</strong><br>
    Dado que ocurre una emergencia en un área con reservas activas,<br>
    cuando el admin cancela esas reservas indicando el motivo,<br>
    entonces el sistema revoca los permisos de acceso y notifica a cada residente afectado con el motivo.
  </td>
  <td>EP03</td>
</tr>

<tr>
  <td><strong>US16</strong></td>
  <td>Configurar reglas y estado de área común</td>
  <td>Como administrador, quiero definir las reglas, horarios y estado de cada área común para regular su uso correctamente.</td>
  <td>
    <strong>Escenario 1: Configuración exitosa.</strong><br>
    Dado que el admin accede a la configuración de un área,<br>
    cuando establece el aforo máximo, el horario de apertura y cierre y la duración máxima de reserva,<br>
    entonces el sistema aplica esas reglas a las nuevas reservas y sincroniza el horario con los lectores RFID del área.<br><br>
    <strong>Escenario 2: Conflicto con reservas existentes.</strong><br>
    Dado que el admin reduce el horario de un área con reservas ya registradas fuera del nuevo rango,<br>
    cuando guarda los cambios,<br>
    entonces el sistema alerta "Existen reservas que superan el nuevo horario, serán canceladas" y solicita confirmación.<br><br>
    <strong>Escenario 3: Deshabilitación del área.</strong><br>
    Dado que el admin deshabilita el "Gimnasio" por mantenimiento,<br>
    cuando confirma la acción,<br>
    entonces el área aparece como no disponible, se cancelan sus reservas vigentes y se notifica a los residentes afectados.<br><br>
    <strong>Escenario 4: Datos inválidos.</strong><br>
    Dado que el admin ingresa un aforo de 0 personas o un horario de cierre anterior al de apertura,<br>
    cuando intenta guardar,<br>
    entonces el sistema muestra "Configuración inválida, verifique los datos ingresados".
  </td>
  <td>EP03</td>
</tr>

<tr>
  <td><strong>US17</strong></td>
  <td>Recordatorios de pago</td>
  <td>Como residente, quiero recibir alertas de mis deudas próximas a vencer.</td>
  <td>
    <strong>Escenario 1: Aviso preventivo.</strong><br>
    Dado que una deuda de mantenimiento está próxima a vencer,<br>
    cuando faltan 3 días para la fecha límite,<br>
    entonces el sistema envía automáticamente un recordatorio al residente.<br><br>
    <strong>Escenario 2: Deuda vencida.</strong><br>
    Dado que un residente no realizó su pago a tiempo,<br>
    cuando se cumple el primer día de retraso,<br>
    entonces el sistema marca la deuda como vencida y alerta al residente.<br><br>
    <strong>Escenario 3: Residente moroso.</strong><br>
    Dado que un residente supera el límite de días de mora configurado,<br>
    cuando el sistema ejecuta la validación diaria de deudas,<br>
    entonces lo marca como moroso y le notifica que su acceso a las áreas comunes quedará restringido.
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US18</strong></td>
  <td>Ver deuda actual</td>
  <td>Como residente, quiero saber cuánto debo pagar de mantenimiento.</td>
  <td>
    <strong>Escenario 1: Detalle de deuda.</strong><br>
    Dado que el residente accede a la sección de pagos,<br>
    cuando consulta su deuda actual,<br>
    entonces el sistema lista sus deudas pendientes con periodo, monto, fecha de vencimiento y estado.<br><br>
    <strong>Escenario 2: Sin deuda.</strong><br>
    Dado que el residente está al día con sus pagos,<br>
    cuando consulta su saldo,<br>
    entonces el sistema muestra "Saldo: S/ 0.00" y un botón para descargar la constancia de no adeudo.<br><br>
    <strong>Escenario 3: Servicio no disponible.</strong><br>
    Dado que el residente consulta su deuda,<br>
    cuando el servicio de pagos no responde,<br>
    entonces se muestra el aviso "Los montos podrían no estar actualizados".
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US19</strong></td>
  <td>Registrar pago con comprobante</td>
  <td>Como residente, quiero subir la foto de mi voucher para validar un pago realizado fuera de línea.</td>
  <td>
    <strong>Escenario 1: Subida exitosa.</strong><br>
    Dado que el residente realizó un pago por transferencia,<br>
    cuando adjunta la foto del voucher en la plataforma,<br>
    entonces el sistema registra el pago como pendiente de revisión del administrador.<br><br>
    <strong>Escenario 2: Voucher ilegible.</strong><br>
    Dado que el admin revisa un comprobante enviado,<br>
    cuando la imagen no permite leer la información correctamente,<br>
    entonces el sistema notifica al residente que debe subir una imagen más clara.<br><br>
    <strong>Escenario 3: Archivo corrupto.</strong><br>
    Dado que el residente intenta subir su comprobante,<br>
    cuando el archivo seleccionado está dañado,<br>
    entonces el sistema muestra "Error: No se pudo procesar el archivo, intente de nuevo".
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US20</strong></td>
  <td>Registrar pagos en el sistema</td>
  <td>Como administrador, quiero registrar manualmente los pagos de los residentes para mantener el sistema actualizado.</td>
  <td>
    <strong>Escenario 1: Registro exitoso.</strong><br>
    Dado que el admin accede al módulo de pagos de un residente,<br>
    cuando selecciona la deuda, ingresa la fecha y el método de pago y confirma el registro,<br>
    entonces el sistema marca la deuda como pagada y genera la constancia de pago.<br><br>
    <strong>Escenario 2: Deuda ya pagada.</strong><br>
    Dado que el admin intenta registrar un pago,<br>
    cuando la deuda seleccionada ya está pagada,<br>
    entonces el sistema muestra "La deuda ya fue pagada" sin registrar un nuevo pago.<br><br>
    <strong>Escenario 3: Fallo de persistencia.</strong><br>
    Dado que el admin intenta guardar el registro de un pago,<br>
    cuando la base de datos se encuentra en mantenimiento,<br>
    entonces el sistema muestra "Error 500: No se pudo registrar el pago, intente nuevamente".
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US21</strong></td>
  <td>Visualizar residentes morosos</td>
  <td>Como administrador, quiero ver la lista de deudores.</td>
  <td>
    <strong>Escenario 1: Filtro de morosidad.</strong><br>
    Dado que el admin accede al módulo de morosidad,<br>
    cuando aplica el filtro de más de 2 meses de deuda,<br>
    entonces el sistema lista los residentes en esa condición.<br><br>
    <strong>Escenario 2: Exportar reporte.</strong><br>
    Dado que el admin necesita el listado de morosos,<br>
    cuando solicita la descarga en PDF,<br>
    entonces el sistema genera el archivo con nombres, departamentos y montos totales.<br><br>
    <strong>Escenario 3: Paginación.</strong><br>
    Dado que existen 500 residentes morosos registrados,<br>
    cuando el admin consulta la lista completa,<br>
    entonces el sistema implementa paginación para evitar que la aplicación se cuelgue.
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US22</strong></td>
  <td>Generar y exportar reportes financieros</td>
  <td>Como administrador, quiero generar y descargar el reporte de ingresos, deudas pendientes y morosidad del edificio.</td>
  <td>
    <strong>Escenario 1: Reporte mensual.</strong><br>
    Dado que el admin selecciona el mes "Mayo",<br>
    cuando solicita el reporte,<br>
    entonces el sistema muestra el total recaudado, las deudas pendientes y el porcentaje de morosidad del periodo.<br><br>
    <strong>Escenario 2: Rango inválido.</strong><br>
    Dado que el admin configura el rango de fechas del reporte,<br>
    cuando la fecha de fin es anterior a la fecha de inicio,<br>
    entonces el sistema muestra "Rango de fechas incoherente".<br><br>
    <strong>Escenario 3: Exportación.</strong><br>
    Dado que el admin generó un reporte,<br>
    cuando lo descarga en Excel o PDF,<br>
    entonces el sistema aplica correctamente los formatos de moneda o indica "Sin registros encontrados" si el periodo no tiene datos.
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US23</strong></td>
  <td>Consultar pagos pasados</td>
  <td>Como residente, quiero ver mi historial de transacciones.</td>
  <td>
    <strong>Escenario 1: Historial.</strong><br>
    Dado que el residente accede a su historial de pagos,<br>
    cuando consulta el período de los últimos 12 meses,<br>
    entonces el sistema lista todos sus pagos con sus constancias y comprobantes.<br><br>
    <strong>Escenario 2: Filtro por año.</strong><br>
    Dado que el residente desea revisar pagos anteriores,<br>
    cuando selecciona el año "2025",<br>
    entonces el sistema recupera únicamente los pagos de ese año.<br><br>
    <strong>Escenario 3: Imagen no disponible.</strong><br>
    Dado que el residente consulta su historial,<br>
    cuando el servidor de imágenes de los comprobantes falla,<br>
    entonces el sistema muestra el historial con el mensaje "Detalles temporalmente no disponibles".
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US24</strong></td>
  <td>Pagar deuda en línea</td>
  <td>Como residente, quiero pagar mi deuda con tarjeta de crédito, débito o Yape desde la app.</td>
  <td>
    <strong>Escenario 1: Pago aprobado.</strong><br>
    Dado que el residente selecciona una deuda de S/ 200 e ingresa los datos de su tarjeta,<br>
    cuando Culqi aprueba la transacción,<br>
    entonces el pago queda confirmado, la deuda se marca como pagada y el residente recibe su constancia.<br><br>
    <strong>Escenario 2: Transacción rechazada.</strong><br>
    Dado que el residente intenta pagar con su tarjeta,<br>
    cuando la tarjeta no tiene fondos suficientes,<br>
    entonces el sistema muestra "La tarjeta no tiene fondos suficientes", la deuda sigue pendiente y permite pagar con otra tarjeta.<br><br>
    <strong>Escenario 3: Pasarela sin respuesta.</strong><br>
    Dado que el residente confirma el pago,<br>
    cuando Culqi no responde dentro del tiempo límite,<br>
    entonces el pago queda en verificación, la deuda se bloquea para nuevos intentos y el residente ve "Estamos verificando tu pago".<br><br>
    <strong>Escenario 4: Reintento sin doble cobro.</strong><br>
    Dado que la app reenvía el mismo pago por una falla de red,<br>
    cuando llega con la misma clave de idempotencia,<br>
    entonces el sistema devuelve el pago ya registrado sin volver a cobrar.
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US25</strong></td>
  <td>Resolver pago en verificación</td>
  <td>Como administrador, quiero confirmar o rechazar un pago que quedó en verificación para evitar dobles cobros y liberar la deuda cuando corresponda.</td>
  <td>
    <strong>Escenario 1: Pago confirmado.</strong><br>
    Dado que un pago quedó en verificación y el administrador comprueba en el panel de Culqi que el cargo existe,<br>
    cuando confirma el pago con el identificador del cargo,<br>
    entonces el pago queda confirmado, la deuda se marca como pagada y se notifica al residente.<br><br>
    <strong>Escenario 2: Pago rechazado.</strong><br>
    Dado que el administrador comprueba que Culqi no realizó el cargo,<br>
    cuando rechaza el pago indicando el motivo,<br>
    entonces el pago queda rechazado y la deuda vuelve a estar disponible para un nuevo intento.<br><br>
    <strong>Escenario 3: Usuario sin permiso.</strong><br>
    Dado que un residente intenta confirmar o rechazar un pago,<br>
    cuando envía la solicitud,<br>
    entonces el sistema retorna 403 sin modificar el pago.
  </td>
  <td>EP04</td>
</tr>

<tr>
  <td><strong>US26</strong></td>
  <td>Visualizar hero y navegar en la Landing Page</td>
  <td>Como visitante, quiero ver la propuesta de valor de Edifika y navegar entre secciones para entender rápidamente de qué trata el producto.</td>
  <td>
    <strong>Escenario 1: Carga correcta.</strong><br>
    Dado que el visitante accede a la landing page,<br>
    cuando la página termina de cargar,<br>
    entonces visualiza el título principal, subtítulo descriptivo, botones CTA y el mockup del producto.<br><br>
    <strong>Escenario 2: Responsividad.</strong><br>
    Dado que el visitante accede desde un dispositivo móvil,<br>
    cuando carga la página,<br>
    entonces el contenido se adapta correctamente sin desbordamiento ni elementos superpuestos.<br><br>
    <strong>Escenario 3: Navegación entre secciones.</strong><br>
    Dado que el visitante hace clic en una opción del navbar,<br>
    cuando el sistema procesa la acción,<br>
    entonces la página realiza scroll suave hasta la sección y resalta el ítem activo en el navbar.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US27</strong></td>
  <td>Visualizar sección de funcionalidades</td>
  <td>Como visitante, quiero ver las funcionalidades principales de Edifika para evaluar si la plataforma se adapta a mis necesidades.</td>
  <td>
    <strong>Escenario 1: Visualización de módulos.</strong><br>
    Dado que el visitante accede a la sección "Funciones",<br>
    cuando la sección carga correctamente,<br>
    entonces se muestran los módulos clave: Pagos y Deudas, Reservas de Áreas Comunes, Comunicados y Smart Building, cada uno con su descripción e ícono.<br><br>
    <strong>Escenario 2: Listado de características.</strong><br>
    Dado que el visitante revisa cada tarjeta de módulo,<br>
    cuando lee su contenido,<br>
    entonces puede ver el listado de características con íconos de verificación para cada funcionalidad incluida.<br><br>
    <strong>Escenario 3: Módulo destacado.</strong><br>
    Dado que el visitante visualiza las tarjetas de funcionalidades,<br>
    cuando observa la tarjeta de Pagos y Deudas,<br>
    entonces aparece visible la etiqueta "Más popular" para orientar la decisión del visitante.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US28</strong></td>
  <td>Acceder a la aplicación desde la Landing Page</td>
  <td>Como usuario, quiero acceder a la aplicación que corresponde a mi rol directamente desde la landing page.</td>
  <td>
    <strong>Escenario 1: Administrador hacia la web.</strong><br>
    Dado que un administrador hace clic en "Ingresar" desde un navegador de escritorio,<br>
    cuando el sistema procesa la acción,<br>
    entonces es redirigido a la pantalla de login de la Web Application.<br><br>
    <strong>Escenario 2: Usuario con sesión activa.</strong><br>
    Dado que el administrador ya tiene una sesión activa,<br>
    cuando hace clic en "Ingresar",<br>
    entonces es redirigido directamente a su dashboard sin pasar por el login.<br><br>
    <strong>Escenario 3: Residente hacia la app móvil.</strong><br>
    Dado que el visitante accede desde un smartphone,<br>
    cuando hace clic en el CTA para residentes,<br>
    entonces el sistema lo redirige a la tienda de aplicaciones (App Store o Google Play) según su sistema operativo.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US29</strong></td>
  <td>Registrar tarjeta RFID de acceso a áreas comunes</td>
  <td>Como administrador, quiero asignar una tarjeta RFID a cada residente para controlar el ingreso a las áreas comunes del edificio.</td>
  <td>
    <strong>Escenario 1: Asignación exitosa.</strong><br>
    Dado que el admin selecciona a un residente y vincula el UID de una tarjeta física,<br>
    cuando confirma la asignación,<br>
    entonces el sistema activa la tarjeta y la sincroniza con los lectores de las áreas comunes.<br><br>
    <strong>Escenario 2: Tarjeta ya asignada.</strong><br>
    Dado que el admin intenta vincular una tarjeta,<br>
    cuando el UID ya está asignado a otro residente,<br>
    entonces el sistema muestra "Esta tarjeta ya se encuentra en uso" y bloquea la acción.<br><br>
    <strong>Escenario 3: Tarjeta perdida.</strong><br>
    Dado que un residente reporta la pérdida de su tarjeta,<br>
    cuando el admin la marca como "Extraviada",<br>
    entonces el sistema la agrega a la blacklist y la desactiva de inmediato en todos los lectores.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US30</strong></td>
  <td>Desactivar acceso a áreas comunes por morosidad</td>
  <td>Como sistema, quiero desactivar automáticamente el acceso de un residente moroso a las áreas comunes para asegurar el cumplimiento de pagos, permitiendo que el administrador lo revierta en casos de emergencia.</td>
  <td>
    <strong>Escenario 1: Desactivación automática.</strong><br>
    Dado que un residente es marcado como moroso,<br>
    cuando el sistema recibe el evento de morosidad,<br>
    entonces suspende su tarjeta RFID en todos los lectores y le notifica el motivo.<br><br>
    <strong>Escenario 2: Reactivación manual por emergencia.</strong><br>
    Dado que un residente con acceso suspendido por mora presenta una emergencia,<br>
    cuando el admin reactiva manualmente su tarjeta,<br>
    entonces el sistema restablece el acceso y registra en el log el motivo de la excepción.<br><br>
    <strong>Escenario 3: Reactivación automática al pagar.</strong><br>
    Dado que un residente con acceso suspendido regulariza su deuda,<br>
    cuando el pago es confirmado,<br>
    entonces el sistema reactiva automáticamente su tarjeta sin intervención del administrador.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US31</strong></td>
  <td>Configurar horarios de riego automático</td>
  <td>Como administrador, quiero configurar los horarios y la duración del riego de cada zona verde para optimizar el mantenimiento del edificio.</td>
  <td>
    <strong>Escenario 1: Configuración exitosa.</strong><br>
    Dado que el admin define para una zona un riego a las 6:00 a.m. por 15 minutos,<br>
    cuando guarda la configuración,<br>
    entonces el sistema programa el riego y sincroniza la programación con el Edge Gateway.<br><br>
    <strong>Escenario 2: Horario en conflicto.</strong><br>
    Dado que el admin intenta programar un riego,<br>
    cuando el horario se superpone con otro ya configurado para la misma zona,<br>
    entonces el sistema muestra "Ya existe un riego programado en este horario para esta zona".<br><br>
    <strong>Escenario 3: Válvula sin respuesta.</strong><br>
    Dado que llega la hora programada de riego,<br>
    cuando la válvula de la zona no confirma la apertura,<br>
    entonces el sistema registra el riego como fallido y notifica al administrador.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US32</strong></td>
  <td>Riego automático según humedad del suelo</td>
  <td>Como sistema, quiero activar el riego según la humedad del suelo para evitar el desperdicio de agua en las áreas verdes.</td>
  <td>
    <strong>Escenario 1: Activación por baja humedad.</strong><br>
    Dado que el sensor de humedad de una zona envía lecturas periódicas al Edge Gateway,<br>
    cuando la humedad medida está por debajo del umbral configurado,<br>
    entonces el sistema abre la válvula de la zona hasta alcanzar el nivel óptimo.<br><br>
    <strong>Escenario 2: Suelo con humedad suficiente.</strong><br>
    Dado que llega el horario de riego programado,<br>
    cuando el sensor detecta que la humedad ya está sobre el umbral,<br>
    entonces el sistema omite el riego y registra el evento como "Riego omitido".<br><br>
    <strong>Escenario 3: Lectura fuera de rango.</strong><br>
    Dado que el sensor envía una lectura inválida o fuera del rango 0 % a 100 %,<br>
    cuando el sistema la recibe,<br>
    entonces descarta la lectura, notifica una posible falla del sensor y aplica la programación por defecto.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US33</strong></td>
  <td>Otorgar acceso temporal por reserva aprobada</td>
  <td>Como residente, quiero que mi reserva aprobada me habilite automáticamente el ingreso al área común solo durante mi horario, para no depender del administrador para entrar.</td>
  <td>
    <strong>Escenario 1: Acceso dentro de la ventana de reserva.</strong><br>
    Dado que el administrador aprueba la reserva de la piscina de 18:00 a 20:00 y el residente tiene una tarjeta ACTIVA,<br>
    cuando presenta su tarjeta en el lector de la piscina a las 18:30,<br>
    entonces el sistema concede el acceso, registra el intento como GRANTED y libera la puerta en menos de 1 segundo.<br><br>
    <strong>Escenario 2: Acceso fuera de la ventana.</strong><br>
    Dado que el residente tiene un permiso vigente de 18:00 a 20:00,<br>
    cuando presenta su tarjeta a las 20:15,<br>
    entonces el sistema deniega el acceso, registra el intento como DENIED y el lector muestra la señal de denegación.<br><br>
    <strong>Escenario 3: Reserva cancelada.</strong><br>
    Dado que el residente tenía un permiso generado por una reserva aprobada,<br>
    cuando la reserva es cancelada,<br>
    entonces el sistema revoca el permiso, lo sincroniza con el Edge Gateway y cualquier intento posterior es denegado.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US34</strong></td>
  <td>Consultar bitácora de accesos</td>
  <td>Como administrador, quiero consultar la bitácora de intentos de acceso a las áreas comunes para auditar quién ingresó y detectar accesos no autorizados.</td>
  <td>
    <strong>Escenario 1: Consulta con filtros.</strong><br>
    Dado que el administrador selecciona un área común, un rango de fechas y el resultado GRANTED o DENIED,<br>
    cuando solicita la bitácora,<br>
    entonces el sistema retorna los intentos ordenados por fecha descendente con dispositivo, tarjeta enmascarada, resultado y marca de tiempo en menos de 500 ms.<br><br>
    <strong>Escenario 2: Sin resultados.</strong><br>
    Dado que no existen intentos de acceso para los filtros seleccionados,<br>
    cuando el administrador ejecuta la consulta,<br>
    entonces el sistema muestra "No se encontraron intentos de acceso para los filtros seleccionados".<br><br>
    <strong>Escenario 3: Intentos denegados repetidos.</strong><br>
    Dado que una misma tarjeta acumula 3 intentos DENIED consecutivos en el mismo lector en menos de 5 minutos,<br>
    cuando el sistema registra el tercer intento,<br>
    entonces marca el evento como "Posible acceso no autorizado" y notifica al administrador con la ubicación del lector.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US35</strong></td>
  <td>Apertura remota de acceso</td>
  <td>Como administrador, quiero abrir remotamente un acceso desde la aplicación web para atender situaciones excepcionales sin desplazarme al lector.</td>
  <td>
    <strong>Escenario 1: Apertura exitosa.</strong><br>
    Dado que el administrador selecciona un lector en estado ACTIVO,<br>
    cuando solicita la apertura remota,<br>
    entonces el Edge Gateway envía el comando al nodo, recibe el ACK en menos de 2 segundos y registra el evento con el identificador del administrador.<br><br>
    <strong>Escenario 2: Lector desconectado.</strong><br>
    Dado que el lector seleccionado se encuentra OFFLINE,<br>
    cuando el administrador solicita la apertura remota,<br>
    entonces el sistema muestra "El lector no está disponible" y no encola el comando para evitar aperturas diferidas.<br><br>
    <strong>Escenario 3: Sin confirmación del dispositivo.</strong><br>
    Dado que el sistema envió el comando de apertura,<br>
    cuando transcurren 5 segundos sin recibir el ACK,<br>
    entonces el sistema muestra "No se confirmó la apertura" y registra el intento como fallido.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US36</strong></td>
  <td>Controlar manualmente el riego</td>
  <td>Como administrador, quiero activar o detener manualmente el riego de una zona para atender situaciones que la programación no contempla.</td>
  <td>
    <strong>Escenario 1: Riego manual activado.</strong><br>
    Dado que el administrador selecciona una zona y define una duración de 10 minutos,<br>
    cuando activa el riego manual,<br>
    entonces el sistema envía el comando de apertura al Edge Gateway, suspende la programación de esa zona durante ese tiempo y registra el override.<br><br>
    <strong>Escenario 2: Detener un riego en curso.</strong><br>
    Dado que una zona se está regando,<br>
    cuando el administrador lo detiene,<br>
    entonces el sistema cierra la válvula y la zona retoma su programación habitual.<br><br>
    <strong>Escenario 3: Válvula sin confirmación.</strong><br>
    Dado que el sistema envió el comando de apertura o cierre,<br>
    cuando la válvula no confirma la acción en 5 segundos,<br>
    entonces el sistema registra el fallo y notifica al administrador con la zona afectada.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US37</strong></td>
  <td>Encendido automático de luces por movimiento</td>
  <td>Como sistema, quiero encender automáticamente las luces de áreas comunes al detectar movimiento para mejorar la seguridad y el ahorro energético del edificio.</td>
  <td>
    <strong>Escenario 1: Encendido por movimiento.</strong><br>
    Dado que el sensor PIR detecta movimiento en un área común y el nivel de lux está por debajo del umbral,<br>
    cuando se activa la señal,<br>
    entonces el sistema enciende automáticamente las luces de esa zona.<br><br>
    <strong>Escenario 2: Apagado por inactividad.</strong><br>
    Dado que las luces de una zona se encendieron por movimiento,<br>
    cuando no se detecta movimiento durante 3 minutos,<br>
    entonces el sistema apaga automáticamente las luces de esa zona.<br><br>
    <strong>Escenario 3: Falla del sensor.</strong><br>
    Dado que un sensor de movimiento deja de responder,<br>
    cuando el sistema intenta comunicarse con el dispositivo sin éxito,<br>
    entonces mantiene las luces en modo seguro y notifica al administrador "Sensor de movimiento sin respuesta" con la ubicación exacta.
  </td>
  <td>EP08</td>
</tr>

<tr>
  <td><strong>US38</strong></td>
  <td>Configurar reglas de automatización de iluminación</td>
  <td>Como administrador, quiero configurar reglas de iluminación por área común (presencia, umbral de lux, franja horaria, tiempo de apagado y prioridad) para automatizar el uso eficiente de la energía.</td>
  <td>
    <strong>Escenario 1: Configuración exitosa.</strong><br>
    Dado que el administrador define para el pasillo de la Torre A presencia requerida, umbral de 50 lux, franja de 18:00 a 06:00, apagado a los 120 segundos y prioridad 1,<br>
    cuando guarda la regla,<br>
    entonces el sistema la persiste y la envía al Edge Gateway para su ejecución local, retornando 201 en menos de 300 ms.<br><br>
    <strong>Escenario 2: Conflicto de prioridad.</strong><br>
    Dado que ya existe una regla activa con la misma prioridad y franja solapada en el área,<br>
    cuando el administrador intenta guardar una nueva regla,<br>
    entonces el sistema retorna 409 con "Ya existe una regla con la misma prioridad para esta franja" sin crear el registro.<br><br>
    <strong>Escenario 3: Valores inválidos.</strong><br>
    Dado que el administrador ingresa un umbral de lux negativo o una franja con hora de inicio igual a la de fin,<br>
    cuando envía la configuración,<br>
    entonces el sistema retorna 400 indicando el campo inválido y no guarda la regla.
  </td>
  <td>EP08</td>
</tr>

<tr>
  <td><strong>US39</strong></td>
  <td>Encender o apagar luces manualmente (override)</td>
  <td>Como residente con una reserva vigente o como administrador, quiero encender o apagar manualmente las luces de un área por un tiempo determinado, para cubrir situaciones que la automatización no contempla.</td>
  <td>
    <strong>Escenario 1: Override aplicado.</strong><br>
    Dado que el residente tiene una reserva vigente del salón de eventos,<br>
    cuando solicita encender las luces por 2 horas,<br>
    entonces el sistema aplica el override ON, suspende la automatización de esa zona durante ese tiempo y publica OverrideTriggered.<br><br>
    <strong>Escenario 2: Expiración del override.</strong><br>
    Dado que un override tiene una duración configurada,<br>
    cuando se cumple ese tiempo,<br>
    entonces el sistema lo da por finalizado y la zona retoma la automatización según la regla vigente.<br><br>
    <strong>Escenario 3: Usuario sin autorización.</strong><br>
    Dado que un residente sin reserva vigente intenta controlar las luces de un área,<br>
    cuando envía la solicitud,<br>
    entonces el sistema retorna 403 con "No tienes permiso para controlar esta zona" sin enviar ningún comando.
  </td>
  <td>EP08</td>
</tr>

<tr>
  <td><strong>US40</strong></td>
  <td>Encender área al iniciar una reserva</td>
  <td>Como sistema, quiero encender automáticamente las luces del área reservada al iniciar la reserva, para que el residente encuentre el espacio listo para su uso.</td>
  <td>
    <strong>Escenario 1: Encendido programado.</strong><br>
    Dado que una reserva aprobada inicia a las 18:00 y el área no tiene presencia detectada,<br>
    cuando el sistema recibe el evento ReservationStarted,<br>
    entonces enciende las luminarias del área y publica LuminaireTurnedOn.<br><br>
    <strong>Escenario 2: Override vigente con precedencia.</strong><br>
    Dado que existe un override OFF vigente solicitado por el administrador en esa área,<br>
    cuando inicia la reserva,<br>
    entonces el sistema respeta el override y no enciende las luces.<br><br>
    <strong>Escenario 3: Edge Gateway sin respuesta.</strong><br>
    Dado que el sistema envía el comando de encendido al Edge Gateway,<br>
    cuando este no confirma la ejecución,<br>
    entonces el sistema reintenta hasta 3 veces y, si persiste el fallo, notifica al administrador con la ubicación afectada.
  </td>
  <td>EP08</td>
</tr>

<tr>
  <td><strong>US41</strong></td>
  <td>Visualizar consumo de energía y agua</td>
  <td>Como administrador, quiero visualizar el consumo de energía (kWh) y agua (litros) por área común y periodo, para identificar dónde se puede reducir el gasto.</td>
  <td>
    <strong>Escenario 1: Consulta exitosa.</strong><br>
    Dado que el administrador selecciona un área y un rango de fechas válido,<br>
    cuando solicita el reporte de consumo,<br>
    entonces el sistema retorna el consumo en kWh y litros agregado por periodo en menos de 1 segundo.<br><br>
    <strong>Escenario 2: Periodo sin datos.</strong><br>
    Dado que no existen lecturas para el área en el rango seleccionado,<br>
    cuando el administrador consulta el consumo,<br>
    entonces el sistema responde con consumo 0 y el mensaje "Sin datos de consumo para el periodo".<br><br>
    <strong>Escenario 3: Rango de fechas inválido.</strong><br>
    Dado que la fecha de inicio es posterior a la fecha de fin,<br>
    cuando el administrador envía la consulta,<br>
    entonces el sistema retorna 400 con "El rango de fechas no es válido" sin consultar la base de series temporales.<br><br>
    <strong>Escenario 4: Lecturas históricas de un sensor.</strong><br>
    Dado que el administrador selecciona un sensor y un rango de tiempo,<br>
    cuando solicita la serie,<br>
    entonces el sistema retorna las lecturas agregadas con su unidad de medida en menos de 1 segundo.
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US42</strong></td>
  <td>Alertar consumo anómalo</td>
  <td>Como administrador, quiero recibir una alerta cuando el consumo de un área se desvíe de su comportamiento habitual, para investigar posibles fallas o usos indebidos.</td>
  <td>
    <strong>Escenario 1: Anomalía detectada.</strong><br>
    Dado que el consumo de un área supera su media móvil en más de 3 desviaciones estándar (|z| > 3),<br>
    cuando el sistema evalúa la nueva agregación,<br>
    entonces registra la anomalía con severidad y evidencia, publica AbnormalConsumptionDetected y notifica al administrador.<br><br>
    <strong>Escenario 2: Consumo dentro de la línea base.</strong><br>
    Dado que el consumo del área se mantiene dentro del rango esperado,<br>
    cuando el sistema evalúa la agregación,<br>
    entonces no genera alerta y actualiza la línea base.<br><br>
    <strong>Escenario 3: Línea base insuficiente.</strong><br>
    Dado que el área tiene menos de 7 días de datos,<br>
    cuando el sistema intenta evaluar anomalías,<br>
    entonces omite la evaluación y registra "Línea base en construcción" sin generar falsas alertas.
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US43</strong></td>
  <td>Detectar falla de dispositivo</td>
  <td>Como administrador, quiero ser notificado cuando un dispositivo no funcione pese a haber recibido una orden, para repararlo oportunamente.</td>
  <td>
    <strong>Escenario 1: Falla de luminaria.</strong><br>
    Dado que una luminaria fue comandada en ON y su corriente medida es 0 durante más de 30 segundos,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces publica DeviceFailureDetected y notifica al administrador con la ubicación de la luminaria.<br><br>
    <strong>Escenario 2: Falla de válvula de riego.</strong><br>
    Dado que la válvula de una zona fue comandada a abrir y el sensor de flujo no registra paso de agua durante más de 30 segundos,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces publica DeviceFailureDetected y notifica al administrador con la zona afectada.<br><br>
    <strong>Escenario 3: Sensor sin lectura.</strong><br>
    Dado que un sensor deja de enviar datos,<br>
    cuando el sistema no recibe lecturas dentro del tiempo límite,<br>
    entonces no declara falla del dispositivo y lo trata como dispositivo sin comunicación (US44).
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US44</strong></td>
  <td>Monitorear estado de conexión de dispositivos</td>
  <td>Como administrador, quiero ver el estado de conexión de todos los dispositivos IoT del edificio, para saber cuáles requieren atención.</td>
  <td>
    <strong>Escenario 1: Visualización del estado.</strong><br>
    Dado que el administrador abre el panel de dispositivos,<br>
    cuando el sistema carga la información,<br>
    entonces muestra cada dispositivo con estado ACTIVO u OFFLINE y su última conexión.<br><br>
    <strong>Escenario 2: Dispositivo sin heartbeat.</strong><br>
    Dado que un dispositivo no emite heartbeat durante el tiempo límite configurado,<br>
    cuando el Edge Gateway ejecuta la validación periódica,<br>
    entonces lo marca OFFLINE, descarta los comandos pendientes hacia él, lo reporta a la nube y se notifica al administrador sin afectar a los demás dispositivos.<br><br>
    <strong>Escenario 3: Reconexión.</strong><br>
    Dado que un dispositivo OFFLINE reanuda su heartbeat,<br>
    cuando el sistema recibe la señal,<br>
    entonces lo marca ACTIVO, registra la recuperación y no ejecuta los comandos que fueron descartados.
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US45</strong></td>
  <td>Leer tarjeta RFID y resolver el acceso</td>
  <td>Como residente, quiero acercar mi tarjeta RFID al lector de la puerta para ingresar a un área común sin depender de otra persona.</td>
  <td>
    <strong>Escenario 1: Acceso concedido.</strong><br>
    Dado que el lector RFID del ESP32 lee la tarjeta de un residente con credencial ACTIVA y permiso vigente en la caché local del Edge Gateway,<br>
    cuando el ESP32 publica el UID leído por MQTT local,<br>
    entonces el Edge Gateway resuelve el acceso como GRANTED y responde al nodo en menos de 500 ms, sin consultar a la nube.<br><br>
    <strong>Escenario 2: Tarjeta desconocida o revocada.</strong><br>
    Dado que el UID leído no existe en la caché o figura en la blacklist,<br>
    cuando el Edge Gateway evalúa el intento,<br>
    entonces responde DENIED al nodo y registra el intento con el UID, el dispositivo y la marca de tiempo.<br><br>
    <strong>Escenario 3: Lecturas repetidas.</strong><br>
    Dado que la misma tarjeta permanece frente al lector,<br>
    cuando el ESP32 detecta el mismo UID varias veces en menos de 2 segundos,<br>
    entonces el sistema procesa una sola lectura y descarta las repetidas.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US46</strong></td>
  <td>Abrir la cerradura eléctrica y re-bloquearla automáticamente</td>
  <td>Como sistema, quiero energizar la cerradura eléctrica solo el tiempo necesario cuando se concede un acceso, para que la puerta no quede abierta.</td>
  <td>
    <strong>Escenario 1: Apertura temporal.</strong><br>
    Dado que el Edge Gateway resolvió un acceso como GRANTED,<br>
    cuando envía el comando de apertura al ESP32,<br>
    entonces el nodo activa la cerradura durante el tiempo configurado (por ejemplo 5 segundos), vuelve a bloquearla y confirma con un ACK.<br><br>
    <strong>Escenario 2: Cerradura sin confirmación.</strong><br>
    Dado que el Edge Gateway envió el comando de apertura,<br>
    cuando no recibe el ACK del nodo en 3 segundos,<br>
    entonces registra el evento como fallido y notifica al administrador "La cerradura no respondió".<br><br>
    <strong>Escenario 3: Reinicio del nodo con la cerradura activa.</strong><br>
    Dado que el ESP32 se reinicia mientras la cerradura está energizada,<br>
    cuando el nodo arranca,<br>
    entonces la cerradura inicia en estado bloqueado y no se reactiva hasta recibir un nuevo comando.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US47</strong></td>
  <td>Mostrar el resultado del acceso en el punto de acceso</td>
  <td>Como residente, quiero ver en la pantalla OLED y escuchar una señal sonora con el resultado de mi acceso, para saber si puedo pasar y por qué.</td>
  <td>
    <strong>Escenario 1: Acceso concedido.</strong><br>
    Dado que el Edge Gateway responde GRANTED con el nombre del residente,<br>
    cuando el ESP32 recibe el resultado,<br>
    entonces el buzzer emite un pitido corto y la OLED muestra "Acceso concedido" y el nombre del residente durante 3 segundos.<br><br>
    <strong>Escenario 2: Acceso denegado con motivo.</strong><br>
    Dado que el Edge Gateway responde DENIED con un motivo (tarjeta no registrada, fuera de horario o moroso),<br>
    cuando el ESP32 recibe el resultado,<br>
    entonces el buzzer emite dos pitidos largos y la OLED muestra "Acceso denegado" y el motivo en máximo 2 líneas.<br><br>
    <strong>Escenario 3: Edge Gateway inalcanzable.</strong><br>
    Dado que el ESP32 no logra comunicarse con el Edge Gateway,<br>
    cuando transcurren 5 segundos sin respuesta,<br>
    entonces la OLED muestra "Sin conexión" y el nodo no concede el acceso hasta restablecer la comunicación.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US48</strong></td>
  <td>Registrar y sincronizar datos generados sin conexión</td>
  <td>Como administrador, quiero que los accesos y la telemetría registrados sin internet se sincronicen luego con la nube, para no perder la auditoría ni los datos de consumo.</td>
  <td>
    <strong>Escenario 1: Registro local sin internet.</strong><br>
    Dado que el edificio perdió la conexión a internet,<br>
    cuando un residente accede con su tarjeta o un sensor envía una lectura,<br>
    entonces el Edge Gateway lo resuelve con su caché y guarda el evento en la cola local de salida (outbox).<br><br>
    <strong>Escenario 2: Sincronización al reconectar.</strong><br>
    Dado que existen eventos pendientes en la cola local,<br>
    cuando se restablece la conexión con la nube,<br>
    entonces los envía en orden cronológico con su marca de tiempo original y marca cada uno como sincronizado solo tras recibir la confirmación.<br><br>
    <strong>Escenario 3: Fallo parcial de sincronización.</strong><br>
    Dado que la nube rechaza o no responde a un lote de eventos,<br>
    cuando el Edge Gateway recibe el error,<br>
    entonces conserva los registros no confirmados y reintenta con espera creciente sin eliminar ni duplicar ninguno.<br><br>
    <strong>Escenario 4: Límite de almacenamiento local.</strong><br>
    Dado que la cola local alcanza el tamaño máximo configurado,<br>
    cuando ingresan nuevas lecturas,<br>
    entonces el Edge Gateway descarta primero la telemetría más antigua, conserva los eventos de acceso y alertas, y registra la pérdida.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US49</strong></td>
  <td>Registrar y autenticar nodos ESP32</td>
  <td>Como administrador, quiero registrar cada ESP32 en el Edge Gateway con sus sensores y actuadores, para que solo los dispositivos autorizados puedan operar.</td>
  <td>
    <strong>Escenario 1: Registro exitoso.</strong><br>
    Dado que el administrador ingresa el identificador, la ubicación y las capacidades del nodo (RFID, cerradura, buzzer, OLED, PIR, LDR, ACS712, humedad, flujo o válvula),<br>
    cuando confirma el registro,<br>
    entonces el Edge Gateway guarda el dispositivo y genera sus credenciales de conexión.<br><br>
    <strong>Escenario 2: Dispositivo no registrado.</strong><br>
    Dado que un ESP32 desconocido intenta publicar o suscribirse en el broker local,<br>
    cuando el Edge Gateway lo detecta,<br>
    entonces rechaza sus mensajes, los registra como intento no autorizado y no los procesa.<br><br>
    <strong>Escenario 3: Identificador duplicado.</strong><br>
    Dado que ya existe un nodo con el mismo identificador,<br>
    cuando el administrador intenta registrarlo de nuevo,<br>
    entonces el sistema retorna 409 con "El dispositivo ya está registrado" sin crear el registro.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US50</strong></td>
  <td>Sincronizar credenciales, reservas, reglas y blacklist desde la nube</td>
  <td>Como sistema, quiero que el Edge Gateway mantenga una copia local de credenciales, reservas vigentes, blacklist y reglas de iluminación y riego, para operar sin depender de internet.</td>
  <td>
    <strong>Escenario 1: Sincronización inicial.</strong><br>
    Dado que el Edge Gateway inicia y tiene conexión con la nube,<br>
    cuando solicita el estado vigente,<br>
    entonces almacena en su base local las credenciales activas, las reservas vigentes, la blacklist y las reglas de iluminación y riego, y registra la versión sincronizada.<br><br>
    <strong>Escenario 2: Actualización incremental.</strong><br>
    Dado que la nube publica un cambio (por ejemplo, la suspensión de una tarjeta o una nueva programación de riego),<br>
    cuando el Edge Gateway recibe la actualización,<br>
    entonces la aplica en su caché en menos de 5 segundos y las siguientes decisiones usan el dato actualizado.<br><br>
    <strong>Escenario 3: Caché desactualizada.</strong><br>
    Dado que el Edge Gateway no se sincroniza durante más de 24 horas,<br>
    cuando se cumple dicho plazo,<br>
    entonces sigue operando con la última caché disponible, registra una advertencia y notifica al administrador al recuperar la conexión.
  </td>
  <td>EP10</td>
</tr>

  </tbody>
</table>

**Technical Stories**

<table>
  <thead>
    <tr>
      <th>Epic / User Story ID</th>
      <th>Título</th>
      <th>Descripción</th>
      <th>Criterios de Aceptación</th>
      <th>Relacionado con (Epic ID)</th>
    </tr>
  </thead>
  <tbody>

<tr>
  <td>TS01</td>
  <td>Configuración de autenticación y autorización con JWT</td>
  <td>Como desarrollador, quiero implementar autenticación y autorización basada en JWT en el microservicio IAM, para que solo los usuarios autorizados (administradores y residentes) accedan a los endpoints protegidos según su rol.</td>
  <td>
    <strong>Escenario 1: Generación de token JWT exitosa</strong><br>
    Dado que un usuario envía credenciales válidas al endpoint de sign-in<br>
    Cuando el sistema valida el email y la contraseña correctamente<br>
    Entonces genera un token JWT firmado con HMAC-SHA256 que incluye email, userId y rol, con expiración configurable y tiempo de respuesta menor a 300ms.<br><br>
    <strong>Escenario 2: Acceso con token inválido o expirado</strong><br>
    Dado que un cliente intenta acceder a un endpoint protegido con un token inválido o expirado<br>
    Cuando el filtro BearerAuthorizationRequestFilter evalúa la solicitud<br>
    Entonces el sistema retorna un error 401 en menos de 100ms con el mensaje correspondiente al tipo de fallo.<br><br>
    <strong>Escenario 3: Acceso con rol no permitido</strong><br>
    Dado que un residente intenta acceder a un endpoint exclusivo de administradores con un token válido<br>
    Cuando el sistema evalúa el rol del token<br>
    Entonces retorna 403 sin ejecutar la operación.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS02</td>
  <td>Implementación de endpoints de registro e inicio de sesión con validaciones</td>
  <td>Como desarrollador, quiero implementar los endpoints de registro e inicio de sesión del microservicio IAM con validaciones estrictas de datos, para garantizar que solo administradores con información válida puedan autorregistrarse.</td>
  <td>
    <strong>Escenario 1: Registro exitoso de administrador</strong><br>
    Dado que se envía un POST a /api/v1/authentication/sign-up con datos válidos incluyendo rol ADMIN, email con formato correcto, contraseña con mayúscula y símbolo, DNI de 8 dígitos y teléfono de 9 dígitos comenzando con 9<br>
    Cuando el sistema procesa el SignUpCommand<br>
    Entonces crea el usuario con la contraseña encriptada en BCrypt y retorna 201 con los datos del usuario en menos de 500ms.<br><br>
    <strong>Escenario 2: Registro rechazado por email duplicado</strong><br>
    Dado que ya existe un usuario registrado con el mismo email<br>
    Cuando se intenta registrar otro usuario con ese email<br>
    Entonces el sistema retorna 400 con el mensaje "El email ya está registrado" sin crear ningún registro.<br><br>
    <strong>Escenario 3: Autorregistro de residente rechazado</strong><br>
    Dado que se intenta registrar un usuario con rol OWNER o TENANT por el endpoint de sign-up<br>
    Cuando el sistema valida el rol en el SignUpCommand<br>
    Entonces retorna 400 con el mensaje "Los residentes son registrados por el administrador".<br><br>
    <strong>Escenario 4: Inicio de sesión exitoso con retorno de token</strong><br>
    Dado que un usuario registrado envía sus credenciales correctas al endpoint de sign-in<br>
    Cuando el sistema valida el email y la contraseña con BCrypt<br>
    Entonces retorna 200 con el token JWT, el id y el email del usuario autenticado.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS03</td>
  <td>Implementación de endpoints de gestión de usuarios</td>
  <td>Como desarrollador, quiero implementar los endpoints CRUD de gestión de usuarios y consulta de roles en el microservicio IAM, para que los administradores puedan consultar, actualizar y desactivar usuarios del sistema.</td>
  <td>
    <strong>Escenario 1: Consulta exitosa de usuario por id</strong><br>
    Dado que se envía un GET a /api/v1/users/{id} con token válido<br>
    Cuando el sistema encuentra al usuario<br>
    Entonces retorna 200 con fullName, email, phone, status, documentType, documentNumber y roles asignados en menos de 300ms.<br><br>
    <strong>Escenario 2: Actualización exitosa de datos de usuario</strong><br>
    Dado que se envía un PUT a /api/v1/users/{id} con datos válidos y token válido<br>
    Cuando el sistema procesa la solicitud<br>
    Entonces actualiza los datos del usuario y retorna 200 con la información actualizada.<br><br>
    <strong>Escenario 3: Desactivación de usuario</strong><br>
    Dado que se envía un PATCH a /api/v1/users/{id}/deactivate con token de administrador<br>
    Cuando el sistema procesa la solicitud<br>
    Entonces cambia el estado del usuario a INACTIVE, impide nuevos inicios de sesión y retorna 200.<br><br>
    <strong>Escenario 4: Consulta de roles disponibles</strong><br>
    Dado que se envía un GET a /api/v1/roles con token válido<br>
    Cuando el sistema procesa la solicitud<br>
    Entonces retorna 200 con la lista de roles configurados en el sistema.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS04</td>
  <td>Configuración del API Gateway como punto de entrada centralizado</td>
  <td>Como desarrollador, quiero configurar un API Gateway que centralice todas las solicitudes de la Web Application y la Mobile Application hacia los microservicios de Edifika, para gestionar el enrutamiento, la validación de tokens JWT y las políticas de seguridad en un único punto de acceso.</td>
  <td>
    <strong>Escenario 1: Enrutamiento exitoso con token válido</strong><br>
    Dado que la aplicación web o móvil envía una solicitud al API Gateway con un token JWT válido<br>
    Cuando el gateway valida el token y determina el microservicio destino según la ruta<br>
    Entonces redirige la solicitud y agrega menos de 200ms al tiempo de procesamiento del microservicio.<br><br>
    <strong>Escenario 2: Bloqueo de solicitud sin token</strong><br>
    Dado que un cliente envía una solicitud a un endpoint protegido sin token<br>
    Cuando el API Gateway intercepta la solicitud<br>
    Entonces retorna 401 en menos de 100ms sin reenviarla a ningún microservicio.<br><br>
    <strong>Escenario 3: Microservicio no disponible</strong><br>
    Dado que el API Gateway recibe una solicitud válida hacia un microservicio que no está disponible<br>
    Cuando intenta redirigir la solicitud<br>
    Entonces retorna 503 con un mensaje claro sin afectar a los demás microservicios.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS05</td>
  <td>Configuración de base de datos independiente por microservicio</td>
  <td>Como desarrollador, quiero que cada microservicio de Edifika tenga su propia base de datos, implementada como un schema y una credencial exclusivos dentro de la instancia PostgreSQL, para garantizar el aislamiento de datos y la autonomía de cada dominio.</td>
  <td>
    <strong>Escenario 1: Creación automática del esquema al iniciar</strong><br>
    Dado que un microservicio arranca por primera vez con su configuración de base de datos<br>
    Cuando Hibernate inicializa el contexto de persistencia con ddl-auto en update<br>
    Entonces crea las tablas del dominio solo en el schema de ese microservicio en menos de 5 segundos.<br><br>
    <strong>Escenario 2: Aislamiento entre microservicios</strong><br>
    Dado que un microservicio intenta leer una tabla del schema de otro microservicio<br>
    Cuando ejecuta la consulta con su propia credencial<br>
    Entonces la base de datos rechaza el acceso por falta de permisos.<br><br>
    <strong>Escenario 3: Aislamiento de fallos</strong><br>
    Dado que la conexión de un microservicio a su base de datos falla<br>
    Cuando ocurre el error<br>
    Entonces únicamente ese microservicio retorna errores 500 mientras los demás continúan respondiendo.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS06</td>
  <td>Configuración base del microservicio Residential Management</td>
  <td>Como desarrollador, quiero crear el microservicio de gestión residencial para administrar edificios, unidades y la vinculación de residentes con sus unidades, de forma independiente del microservicio IAM.</td>
  <td>
    <strong>Escenario 1: Registro exitoso de edificio con unidades</strong><br>
    Dado que el administrador envía un POST con los datos del edificio y sus unidades con token válido<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces guarda el edificio y sus unidades y retorna 201 con los datos registrados.<br><br>
    <strong>Escenario 2: Vinculación de residente a unidad</strong><br>
    Dado que el administrador vincula un residente a una unidad<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces registra la relación sin duplicarla, publica ResidentAssignedToUnit y retorna 201.<br><br>
    <strong>Escenario 3: Consulta de residentes por edificio</strong><br>
    Dado que el administrador consulta los residentes de un edificio con token válido<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces retorna 200 con userId, número de unidad y fecha de vinculación en menos de 400ms.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS07</td>
  <td>Configuración base del microservicio Payment con integración Culqi</td>
  <td>Como desarrollador, quiero crear el microservicio de pagos para gestionar deudas y pagos del condominio integrándose con Culqi mediante un Saga, garantizando que una deuda nunca se cobre dos veces ni quede en un estado inconsistente.</td>
  <td>
    <strong>Escenario 1: Registro de deuda para una unidad</strong><br>
    Dado que el administrador registra una deuda con monto, descripción y fecha de vencimiento<br>
    Cuando el Payment Service procesa la solicitud con token válido<br>
    Entonces crea la deuda con estado PENDING y retorna 201 en menos de 300ms.<br><br>
    <strong>Escenario 2: Cargo confirmado por Culqi</strong><br>
    Dado que un residente envía un pago con un token de Culqi y una Idempotency-Key<br>
    Cuando Culqi aprueba el cargo creado con el monto de la deuda<br>
    Entonces el pago pasa a CONFIRMED, la deuda a PAID, se guarda el chargeId y los últimos 4 dígitos de la tarjeta, y se publica PaymentConfirmed.<br><br>
    <strong>Escenario 3: Cargo rechazado por Culqi</strong><br>
    Dado que Culqi rechaza el cargo<br>
    Cuando el Payment Service recibe la respuesta<br>
    Entonces el pago pasa a REJECTED con un motivo de rechazo propio, la deuda permanece PENDING y se publica PaymentRejected.<br><br>
    <strong>Escenario 4: Timeout de Culqi</strong><br>
    Dado que Culqi no responde dentro del tiempo límite<br>
    Cuando el microservicio detecta el timeout<br>
    Entonces el pago pasa a PENDING_VERIFICATION, la deuda queda bloqueada para nuevos intentos y se retorna 502.<br><br>
    <strong>Escenario 5: Reintento idempotente</strong><br>
    Dado que llega un pago con una Idempotency-Key ya registrada<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces retorna 200 con el pago existente sin crear un nuevo cargo en Culqi.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS08</td>
  <td>Configuración base del microservicio Reservation</td>
  <td>Como desarrollador, quiero crear el microservicio de reservas para gestionar la disponibilidad y el uso de las áreas comunes, garantizando que no existan reservas duplicadas.</td>
  <td>
    <strong>Escenario 1: Consulta de disponibilidad</strong><br>
    Dado que un residente consulta la disponibilidad de un área común con fecha y horario<br>
    Cuando el Reservation Service procesa la solicitud<br>
    Entonces retorna 200 con los horarios disponibles en menos de 300ms.<br><br>
    <strong>Escenario 2: Bloqueo de reserva duplicada</strong><br>
    Dado que ya existe una reserva aprobada para un área en un horario específico<br>
    Cuando otro residente intenta reservar el mismo horario<br>
    Entonces el sistema retorna 409 con "El horario seleccionado ya está reservado" sin crear el registro.<br><br>
    <strong>Escenario 3: Publicación de evento al aprobar</strong><br>
    Dado que el administrador aprueba una reserva pendiente<br>
    Cuando el microservicio actualiza el estado a APPROVED<br>
    Entonces publica ReservationApproved para que IoT Access Management habilite el acceso y Notification avise al residente.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS09</td>
  <td>Configuración base del microservicio Communication</td>
  <td>Como desarrollador, quiero crear el microservicio de comunicados para que los administradores publiquen avisos oficiales con trazabilidad de lectura.</td>
  <td>
    <strong>Escenario 1: Publicación de comunicado</strong><br>
    Dado que el administrador publica un comunicado con título, descripción y prioridad<br>
    Cuando el Communication Service procesa la solicitud<br>
    Entonces guarda el comunicado, publica AnnouncementPublished y retorna 201 en menos de 400ms.<br><br>
    <strong>Escenario 2: Registro de lectura</strong><br>
    Dado que un residente abre un comunicado en la aplicación<br>
    Cuando el microservicio registra la acción<br>
    Entonces guarda el userId, el id del comunicado y la fecha de visualización en la tabla announcement_read.<br><br>
    <strong>Escenario 3: Métricas de lectura</strong><br>
    Dado que el administrador consulta las métricas de un comunicado<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces retorna 200 con el total de residentes, cuántos lo leyeron y el porcentaje de alcance.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS10</td>
  <td>Configuración base del microservicio Notification con Firebase</td>
  <td>Como desarrollador, quiero crear el microservicio de notificaciones integrado con Firebase Cloud Messaging para enviar alertas push ante eventos relevantes del sistema.</td>
  <td>
    <strong>Escenario 1: Envío exitoso de notificación push</strong><br>
    Dado que Notification consume un evento como PaymentConfirmed o ReservationApproved<br>
    Cuando procesa el evento y lo envía a Firebase<br>
    Entonces Firebase entrega la notificación al dispositivo del usuario en menos de 2 segundos.<br><br>
    <strong>Escenario 2: Firebase no disponible</strong><br>
    Dado que Notification intenta enviar una notificación y Firebase no responde<br>
    Cuando se detecta el timeout o error de conexión<br>
    Entonces registra la notificación con estado FAILED y la reintenta sin afectar al servicio que originó el evento.<br><br>
    <strong>Escenario 3: Token de dispositivo inválido</strong><br>
    Dado que Firebase indica que el token del dispositivo es inválido o expiró<br>
    Cuando Notification recibe la respuesta<br>
    Entonces elimina el token inválido sin reintentar el envío y registra el incidente.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS11</td>
  <td>Configuración base del microservicio Report</td>
  <td>Como desarrollador, quiero crear el microservicio de reportes para que los administradores generen y exporten reportes financieros y de consumo del condominio.</td>
  <td>
    <strong>Escenario 1: Reporte financiero por período</strong><br>
    Dado que el administrador solicita un reporte con fecha de inicio y fin<br>
    Cuando el Report Service consulta los datos al Payment Service mediante REST<br>
    Entonces genera el total recaudado, las deudas pendientes y la lista de morosos, retornando 200 en menos de 1 segundo.<br><br>
    <strong>Escenario 2: Exportación en PDF</strong><br>
    Dado que el administrador solicita exportar un reporte<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces genera el PDF y lo retorna con el header Content-Type application/pdf.<br><br>
    <strong>Escenario 3: Rango de fechas inválido</strong><br>
    Dado que la fecha de inicio es posterior a la fecha de fin<br>
    Cuando el microservicio valida los parámetros<br>
    Entonces retorna 400 con "El rango de fechas no es válido" sin consultar a otros microservicios.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS12</td>
  <td>Configuración base del microservicio Messaging / Forum</td>
  <td>Como desarrollador, quiero crear el microservicio de foro para que los residentes publiquen mensajes en el foro de su edificio con un límite de una publicación diaria.</td>
  <td>
    <strong>Escenario 1: Publicación exitosa</strong><br>
    Dado que un residente que no ha publicado en el día envía un POST con su mensaje<br>
    Cuando el Forum Service valida el límite diario y procesa la solicitud<br>
    Entonces guarda la publicación vinculada al edificio y al userId, publica ForumPostCreated y retorna 201.<br><br>
    <strong>Escenario 2: Límite diario alcanzado</strong><br>
    Dado que un residente ya publicó en el día<br>
    Cuando intenta publicar otro mensaje<br>
    Entonces el microservicio retorna 429 con "Has alcanzado el límite de una publicación diaria".<br><br>
    <strong>Escenario 3: Consulta del foro por edificio</strong><br>
    Dado que un residente o administrador consulta el foro de un edificio con token válido<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces retorna 200 con las publicaciones visibles ordenadas por fecha descendente con autor, contenido e imagen si aplica.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS13</td>
  <td>Comunicación entre microservicios mediante REST con manejo de fallos</td>
  <td>Como desarrollador, quiero implementar la comunicación síncrona entre microservicios mediante REST con manejo controlado de errores, para los casos en que el servicio que llama necesita la respuesta para continuar.</td>
  <td>
    <strong>Escenario 1: Consulta exitosa entre microservicios</strong><br>
    Dado que Payment necesita validar con Residential Management que una unidad existe antes de crear una deuda<br>
    Cuando realiza la llamada REST con el token de servicio<br>
    Entonces obtiene la respuesta en menos de 500ms y continúa el procesamiento.<br><br>
    <strong>Escenario 2: Microservicio destino no disponible</strong><br>
    Dado que un microservicio intenta comunicarse con otro que no está disponible<br>
    Cuando se produce un timeout o error de conexión<br>
    Entonces retorna un error descriptivo al cliente sin colapsar su propio servicio y registra el fallo en sus logs.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS14</td>
  <td>Documentación de API con Swagger y autenticación JWT</td>
  <td>Como desarrollador, quiero integrar Swagger con soporte de autenticación JWT en cada microservicio, para que los endpoints estén documentados y puedan probarse desde una interfaz gráfica.</td>
  <td>
    <strong>Escenario 1: Visualización de endpoints</strong><br>
    Dado que un desarrollador accede a la URL de Swagger de un microservicio<br>
    Cuando la interfaz carga correctamente<br>
    Entonces muestra todos los endpoints agrupados por controlador con sus métodos HTTP, parámetros, esquemas y códigos de error.<br><br>
    <strong>Escenario 2: Prueba de endpoint protegido</strong><br>
    Dado que un desarrollador ingresa un token JWT válido en el campo Authorize<br>
    Cuando ejecuta una petición con Try it out<br>
    Entonces el sistema procesa la solicitud y muestra la respuesta con el código HTTP correspondiente.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS15</td>
  <td>Configuración de CORS en el API Gateway</td>
  <td>Como desarrollador, quiero configurar las políticas de CORS en el API Gateway para que la Web Application y la Mobile Application se comuniquen con el backend en desarrollo y producción.</td>
  <td>
    <strong>Escenario 1: Origen autorizado</strong><br>
    Dado que un cliente realiza una solicitud desde un dominio registrado en la lista de orígenes permitidos<br>
    Cuando el gateway procesa la solicitud<br>
    Entonces responde con los headers Access-Control-Allow-Origin y Access-Control-Allow-Methods correctos.<br><br>
    <strong>Escenario 2: Origen no autorizado</strong><br>
    Dado que una aplicación externa consume un endpoint desde un dominio no registrado<br>
    Cuando realiza la petición<br>
    Entonces el gateway la rechaza por política CORS sin reenviarla a ningún microservicio.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS16</td>
  <td>Configuración base del microservicio IoT Access Management</td>
  <td>Como desarrollador, quiero crear el microservicio IoT Access Management para gestionar tarjetas RFID, permisos de acceso por área común, restricciones por morosidad y la auditoría de accesos.</td>
  <td>
    <strong>Escenario 1: Registro de tarjeta RFID</strong><br>
    Dado que el administrador asigna una tarjeta RFID a un residente con token válido<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces guarda la credencial con estado ACTIVE y retorna 201 en menos de 300ms.<br><br>
    <strong>Escenario 2: Decisión de acceso</strong><br>
    Dado que existe una credencial activa, un residente no moroso y un permiso vigente para el área<br>
    Cuando AccessDecisionService evalúa un intento de acceso<br>
    Entonces lo resuelve como GRANTED; si falta cualquiera de las tres condiciones, lo resuelve como DENIED con el motivo.<br><br>
    <strong>Escenario 3: Suspensión por morosidad</strong><br>
    Dado que el microservicio consume el evento ResidentMarkedDelinquent<br>
    Cuando procesa el evento<br>
    Entonces suspende las credenciales del residente y sincroniza el cambio con el Edge Gateway.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS17</td>
  <td>Comunicación con dispositivos ESP32 a través del Edge Gateway</td>
  <td>Como desarrollador, quiero que los microservicios IoT se comuniquen con las placas ESP32 a través del Edge Gateway y el broker MQTT, para recibir lecturas de sensores y enviar comandos de actuación (abrir acceso, encender luces, abrir o cerrar válvulas) de forma confiable.</td>
  <td>
    <strong>Escenario 1: Recepción de lectura de sensor</strong><br>
    Dado que un ESP32 publica una lectura de humedad en su tópico MQTT local<br>
    Cuando el Edge Gateway la reenvía al broker de la nube<br>
    Entonces IoT Telemetry & Analytics la almacena y Smart Irrigation evalúa el umbral en menos de 500ms.<br><br>
    <strong>Escenario 2: Envío de comando de actuación</strong><br>
    Dado que un microservicio IoT determina que debe encenderse una luz o abrirse una válvula<br>
    Cuando envía el comando al Edge Gateway<br>
    Entonces el Edge Gateway lo publica al ESP32 destino, que ejecuta la acción y confirma con un ACK.<br><br>
    <strong>Escenario 3: Pérdida de conexión</strong><br>
    Dado que se interrumpe la conexión entre el Edge Gateway y la nube<br>
    Cuando los microservicios IoT dejan de recibir datos del edificio<br>
    Entonces el Edge Gateway sigue operando con su caché local y los microservicios no envían comandos hasta restablecer la conexión.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS18</td>
  <td>Configuración base del microservicio Smart Lighting & Automation</td>
  <td>Como desarrollador, quiero crear el microservicio Smart Lighting & Automation para gestionar luminarias, reglas de automatización y comandos de override de forma independiente de los demás microservicios.</td>
  <td>
    <strong>Escenario 1: Persistencia de regla y luminaria</strong><br>
    Dado que el administrador envía una regla de automatización válida con token JWT<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces persiste la regla en su propia base de datos y retorna 201 en menos de 300 ms.<br><br>
    <strong>Escenario 2: Resolución por precedencia</strong><br>
    Dado que coexisten una regla programada y un override vigente sobre la misma luminaria<br>
    Cuando AutomationDecisionService evalúa el estado objetivo<br>
    Entonces aplica el override por encima de la regla y publica el evento correspondiente.<br><br>
    <strong>Escenario 3: Aislamiento de fallos</strong><br>
    Dado que la base de datos del servicio deja de responder<br>
    Cuando ocurre el error de conexión<br>
    Entonces únicamente este microservicio retorna errores 500 mientras los demás continúan operando.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS19</td>
  <td>Configuración base del microservicio IoT Telemetry & Analytics con TimescaleDB</td>
  <td>Como desarrollador, quiero crear el microservicio de telemetría con almacenamiento en TimescaleDB para ingerir lecturas de sensores y resolver consultas analíticas con baja latencia.</td>
  <td>
    <strong>Escenario 1: Ingesta de lectura válida</strong><br>
    Dado que el Edge Gateway reenvía una lectura de sensor por MQTT<br>
    Cuando el servicio la valida y normaliza<br>
    Entonces la persiste en la hypertable sensor_readings en menos de 500 ms.<br><br>
    <strong>Escenario 2: Consulta sobre agregados continuos</strong><br>
    Dado que el administrador consulta el consumo de un mes<br>
    Cuando el servicio resuelve la consulta<br>
    Entonces responde usando agregados continuos sin recorrer la serie cruda, en menos de 1 segundo.<br><br>
    <strong>Escenario 3: Mensaje malformado</strong><br>
    Dado que llega un mensaje MQTT con formato inválido<br>
    Cuando el servicio intenta procesarlo<br>
    Entonces lo descarta, registra el error y continúa la ingesta sin interrupciones.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS20</td>
  <td>Configuración base del microservicio Smart Irrigation</td>
  <td>Como desarrollador, quiero crear el microservicio Smart Irrigation para gestionar zonas de riego, programaciones, umbrales de humedad y overrides manuales de forma independiente de los demás microservicios.</td>
  <td>
    <strong>Escenario 1: Registro de zona y programación</strong><br>
    Dado que el administrador registra una zona con su programación y umbral de humedad con token JWT<br>
    Cuando el microservicio procesa la solicitud<br>
    Entonces persiste los datos en su propia base de datos, los sincroniza con el Edge Gateway y retorna 201 en menos de 300 ms.<br><br>
    <strong>Escenario 2: Decisión de riego por humedad</strong><br>
    Dado que el servicio consume el evento SoilMoistureMeasured de una zona<br>
    Cuando la humedad está por debajo del umbral configurado<br>
    Entonces envía el comando de apertura de válvula al Edge Gateway y publica IrrigationStarted.<br><br>
    <strong>Escenario 3: Evento duplicado</strong><br>
    Dado que el mismo SoilMoistureMeasured llega dos veces<br>
    Cuando el servicio lo procesa<br>
    Entonces no genera un segundo comando de riego.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS21</td>
  <td>Implementación del Edge Gateway con operación sin conexión y sincronización</td>
  <td>Como desarrollador, quiero implementar el Edge Gateway que se comunica por MQTT local con los nodos ESP32 y se sincroniza con la nube, para que el condominio siga operando aun sin conexión a internet.</td>
  <td>
    <strong>Escenario 1: Operación sin conexión</strong><br>
    Dado que se pierde la conexión a internet del edificio<br>
    Cuando un residente presenta una tarjeta con permiso vigente<br>
    Entonces el Edge Gateway resuelve el acceso con las credenciales, reservas y blacklist sincronizadas y mantiene el acceso funcionando.<br><br>
    <strong>Escenario 2: Sincronización al reconectar</strong><br>
    Dado que el Edge Gateway acumuló eventos y lecturas durante la desconexión<br>
    Cuando se restablece la conexión<br>
    Entonces los envía en orden cronológico a la nube sin duplicarlos.<br><br>
    <strong>Escenario 3: Reenvío de eventos de baja latencia</strong><br>
    Dado que el Edge Gateway recibe una lectura de presencia por MQTT local<br>
    Cuando la reenvía como evento<br>
    Entonces lo publica en menos de 200 ms priorizando la latencia sobre su interpretación de dominio.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS22</td>
  <td>Publicación y consumo de eventos de dominio mediante el broker</td>
  <td>Como desarrollador, quiero implementar la mensajería de eventos de dominio mediante el broker AMQP/MQTT con consumo idempotente, para integrar los contextos sin acoplarlos.</td>
  <td>
    <strong>Escenario 1: Consumo de evento de otro contexto</strong><br>
    Dado que Reservation publica ReservationApproved<br>
    Cuando IoT Access Management consume el evento<br>
    Entonces crea el permiso temporal correspondiente en menos de 500 ms.<br><br>
    <strong>Escenario 2: Consumo idempotente</strong><br>
    Dado que el broker entrega el mismo evento más de una vez<br>
    Cuando el consumidor lo procesa<br>
    Entonces aplica el efecto una sola vez, registrando el identificador del evento procesado.<br><br>
    <strong>Escenario 3: Broker no disponible</strong><br>
    Dado que el broker no responde al publicar un evento<br>
    Cuando el contexto intenta enviarlo<br>
    Entonces lo conserva en una cola de salida y lo reintenta hasta confirmar su entrega sin perderlo.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS23</td>
  <td>Configuración base del Edge Gateway con Python, Flask, Peewee ORM y SQLite</td>
  <td>Como desarrollador, quiero crear el servicio Edge Gateway con Python, Flask, Peewee ORM y SQLite con configuración por variables de entorno y endpoint de salud, para tener una base ejecutable en el equipo del edificio.</td>
  <td>
    <strong>Escenario 1: Arranque del servicio</strong><br>
    Dado que el servicio se inicia con la configuración requerida<br>
    Cuando Flask termina de levantar<br>
    Entonces el endpoint GET /health responde 200 en menos de 200 ms con el estado del servicio, de la base local y del broker.<br><br>
    <strong>Escenario 2: Documentación de la API</strong><br>
    Dado que el desarrollador accede a la interfaz Swagger del servicio<br>
    Cuando la interfaz carga<br>
    Entonces muestra todos los endpoints con sus esquemas de solicitud y respuesta.<br><br>
    <strong>Escenario 3: Configuración faltante</strong><br>
    Dado que falta una variable de entorno obligatoria<br>
    Cuando el servicio intenta iniciar<br>
    Entonces falla al arrancar con un mensaje que indica la variable ausente.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS24</td>
  <td>Contrato de mensajes MQTT entre el Edge Gateway y los ESP32</td>
  <td>Como desarrollador, quiero definir y validar el contrato de tópicos y mensajes JSON entre el Edge Gateway y los nodos ESP32, para que firmware y servicio evolucionen sin romperse.</td>
  <td>
    <strong>Escenario 1: Mensaje válido</strong><br>
    Dado que un ESP32 publica una lectura que cumple el esquema (deviceId, tipo, valor, unidad y marca de tiempo)<br>
    Cuando el Edge Gateway la recibe<br>
    Entonces la valida y la procesa en menos de 100 ms.<br><br>
    <strong>Escenario 2: Mensaje inválido</strong><br>
    Dado que llega un mensaje con campos faltantes o tipos incorrectos<br>
    Cuando el Edge Gateway lo valida<br>
    Entonces lo descarta, registra el error con el tópico de origen y continúa con los siguientes.<br><br>
    <strong>Escenario 3: Versión de contrato</strong><br>
    Dado que un nodo publica con una versión de esquema no soportada<br>
    Cuando el Edge Gateway la evalúa<br>
    Entonces rechaza el mensaje y reporta "Versión de firmware incompatible" para ese dispositivo.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS25</td>
  <td>Persistencia local con SQLite y cola de salida</td>
  <td>Como desarrollador, quiero almacenar localmente credenciales, reglas, lecturas y eventos pendientes en SQLite, para garantizar la operación offline y la entrega confiable a la nube.</td>
  <td>
    <strong>Escenario 1: Persistencia tras reinicio</strong><br>
    Dado que el Edge Gateway tiene datos en su base local<br>
    Cuando el servicio se reinicia<br>
    Entonces recupera credenciales, reservas, reglas y eventos pendientes sin pérdida de información.<br><br>
    <strong>Escenario 2: Escritura atómica del evento</strong><br>
    Dado que se procesa un intento de acceso<br>
    Cuando el sistema lo registra<br>
    Entonces guarda el resultado y el evento de salida en una única transacción.<br><br>
    <strong>Escenario 3: Base local llena o corrupta</strong><br>
    Dado que la base local no puede escribirse<br>
    Cuando el servicio detecta el error<br>
    Entonces lo registra, lo notifica a la nube cuando es posible y sigue resolviendo accesos con la caché en memoria.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS26</td>
  <td>Firmware base del ESP32 con lectura de sensores y reconexión</td>
  <td>Como desarrollador, quiero implementar el firmware base del ESP32 que lea los sensores (RFID, PIR, LDR, ACS712, humedad y flujo), controle los actuadores (cerradura, buzzer, OLED, luminaria y válvula) y mantenga la conexión Wi-Fi y MQTT.</td>
  <td>
    <strong>Escenario 1: Publicación de lecturas</strong><br>
    Dado que el nodo está conectado a Wi-Fi y al broker local<br>
    Cuando se cumple el intervalo de muestreo<br>
    Entonces publica las lecturas de sus sensores y el heartbeat en sus tópicos.<br><br>
    <strong>Escenario 2: Reconexión automática</strong><br>
    Dado que se pierde la conexión Wi-Fi o MQTT<br>
    Cuando el nodo detecta la desconexión<br>
    Entonces reintenta con espera creciente sin reiniciarse y los actuadores permanecen en estado seguro (cerradura bloqueada, válvula cerrada, buzzer apagado).<br><br>
    <strong>Escenario 3: Watchdog</strong><br>
    Dado que el programa principal se bloquea<br>
    Cuando vence el temporizador watchdog<br>
    Entonces el nodo se reinicia y retoma su operación normal.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS27</td>
  <td>Seguridad de la comunicación del Edge Gateway</td>
  <td>Como desarrollador, quiero asegurar la comunicación entre los ESP32, el Edge Gateway y la nube, para evitar accesos o comandos no autorizados.</td>
  <td>
    <strong>Escenario 1: Conexión de nodo autenticada</strong><br>
    Dado que un ESP32 se conecta al broker local con sus credenciales<br>
    Cuando el broker valida usuario y contraseña<br>
    Entonces permite publicar y suscribirse únicamente a los tópicos asignados a ese dispositivo.<br><br>
    <strong>Escenario 2: Comunicación con la nube</strong><br>
    Dado que el Edge Gateway invoca a la nube<br>
    Cuando envía la solicitud<br>
    Entonces usa HTTPS y un token de servicio, y no registra secretos en los logs.<br><br>
    <strong>Escenario 3: Credencial comprometida</strong><br>
    Dado que el administrador revoca las credenciales de un nodo<br>
    Cuando el nodo intenta reconectarse<br>
    Entonces el broker rechaza la conexión y el Edge Gateway registra el intento.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS28</td>
  <td>Estandarización de marcas de tiempo y sincronización de reloj</td>
  <td>Como desarrollador, quiero que todos los componentes registren las marcas de tiempo en UTC (ISO 8601), las muestren en America/Lima y mantengan el reloj sincronizado, para que los permisos por horario y los eventos sean confiables.</td>
  <td>
    <strong>Escenario 1: Registro en UTC</strong><br>
    Dado que un nodo publica una lectura o evento<br>
    Cuando el Edge Gateway lo recibe<br>
    Entonces lo almacena con la marca de tiempo en UTC (ISO 8601) sin perder el offset original.<br><br>
    <strong>Escenario 2: Visualización en hora local</strong><br>
    Dado que el administrador consulta la bitácora de accesos<br>
    Cuando el sistema muestra las fechas<br>
    Entonces las presenta en America/Lima sin alterar el valor almacenado.<br><br>
    <strong>Escenario 3: Sincronización del reloj del nodo</strong><br>
    Dado que el Edge Gateway tiene la hora sincronizada por NTP<br>
    Cuando un nodo presenta una diferencia mayor a 2 segundos o arranca sin hora válida<br>
    Entonces el nodo ajusta su reloj con la hora del Edge Gateway y no concede accesos que dependan del horario hasta tenerla.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS29</td>
  <td>Despliegue del Edge Gateway con Docker Compose</td>
  <td>Como desarrollador, quiero desplegar el Edge Gateway, el broker MQTT y un backend simulado con Docker Compose, para ejecutar y demostrar la solución con un solo comando.</td>
  <td>
    <strong>Escenario 1: Arranque completo</strong><br>
    Dado que el desarrollador ejecuta docker compose up<br>
    Cuando los servicios superan sus verificaciones de salud<br>
    Entonces el Edge Gateway responde 200 en /health, conectado al broker MQTT y al backend.<br><br>
    <strong>Escenario 2: Persistencia tras reinicio</strong><br>
    Dado que el Edge Gateway tiene datos y eventos pendientes almacenados<br>
    Cuando se reinicia su contenedor<br>
    Entonces recupera la información desde el volumen sin pérdida de datos.<br><br>
    <strong>Escenario 3: Broker aún no disponible</strong><br>
    Dado que el broker MQTT todavía no está listo o se cae<br>
    Cuando el Edge Gateway intenta conectarse<br>
    Entonces reintenta con espera creciente sin terminar el proceso y se suscribe de nuevo al reconectar.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS30</td>
  <td>Simulador de nodos ESP32 para pruebas sin hardware</td>
  <td>Como desarrollador, quiero un simulador de nodos ESP32 que respete el contrato MQTT, para probar el Edge Gateway sin depender del hardware físico.</td>
  <td>
    <strong>Escenario 1: Nodo virtual en operación</strong><br>
    Dado que el simulador se ejecuta con el identificador de un nodo registrado<br>
    Cuando transcurre el intervalo de muestreo<br>
    Entonces publica el heartbeat y lecturas de presencia, lux, corriente, humedad y flujo conforme al contrato, y confirma los comandos recibidos.<br><br>
    <strong>Escenario 2: Lectura de una tarjeta</strong><br>
    Dado que el desarrollador indica un UID de tarjeta<br>
    Cuando el simulador lo publica como lectura de acceso<br>
    Entonces muestra el resultado recibido del Edge Gateway y termina con código 0 si el acceso fue concedido y 1 si fue denegado.<br><br>
    <strong>Escenario 3: Actuador que no responde</strong><br>
    Dado que el simulador se ejecuta sin confirmar comandos<br>
    Cuando el Edge Gateway envía una orden de apertura de cerradura o válvula<br>
    Entonces la orden expira y el Edge Gateway reporta una alerta de dispositivo sin respuesta.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS31</td>
  <td>Contrato de integración entre el Edge Gateway y el backend</td>
  <td>Como desarrollador, quiero un contrato de integración entre el Edge Gateway y el backend con entrega por lotes e idempotencia, para transportar la información de los nodos sin pérdidas ni duplicados.</td>
  <td>
    <strong>Escenario 1: Entrega idempotente por lotes</strong><br>
    Dado que el Edge Gateway envía un lote de eventos, cada uno con un identificador único<br>
    Cuando el backend los acepta<br>
    Entonces responde con los identificadores aceptados y un reenvío del mismo lote no duplica ningún evento.<br><br>
    <strong>Escenario 2: Error transitorio</strong><br>
    Dado que el backend responde 5xx, 429 o no está disponible<br>
    Cuando el Edge Gateway intenta entregar los eventos<br>
    Entonces los conserva en su cola y reintenta con espera creciente (máximo 60 segundos) sin perder el orden cronológico.<br><br>
    <strong>Escenario 3: Rechazo permanente</strong><br>
    Dado que el backend rechaza un evento con un error 4xx distinto de 401, 403, 408 y 429<br>
    Cuando se agotan 5 intentos<br>
    Entonces el Edge Gateway descarta ese evento, lo registra y continúa con los siguientes sin bloquear la cola.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS32</td>
  <td>Pruebas automatizadas del Edge Gateway</td>
  <td>Como desarrollador, quiero una suite de pruebas automatizadas del Edge Gateway que no dependa del broker ni de la red, para detectar regresiones antes de cada integración.</td>
  <td>
    <strong>Escenario 1: Ejecución aislada</strong><br>
    Dado que el desarrollador ejecuta la suite en un equipo sin broker MQTT ni internet<br>
    Cuando las pruebas se ejecutan<br>
    Entonces todas usan dobles de prueba para el broker y el backend, cada una con su propia base de datos, y terminan en menos de 30 segundos.<br><br>
    <strong>Escenario 2: Cobertura de escenarios</strong><br>
    Dado que cada historia del Edge Gateway define sus escenarios de aceptación<br>
    Cuando se revisa la suite<br>
    Entonces existe al menos una prueba por escenario, incluidos los casos de error.<br><br>
    <strong>Escenario 3: Detección de regresiones</strong><br>
    Dado que un cambio altera una regla de negocio, como el orden de entrega de eventos o la decisión de acceso<br>
    Cuando se ejecuta la suite<br>
    Entonces al menos una prueba falla e indica el comportamiento que cambió.
  </td>
  <td>EP05</td>
</tr>

  </tbody>
</table>


## Justificación y Trazabilidad de las Historias de Usuario

La siguiente tabla relaciona cada user story con el user persona que la origina, la necesidad o pain identificado en las entrevistas y su justificación. La columna **Evidencia** indica el respaldo de cada historia: **Directa**, cuando un entrevistado mencionó el problema explícitamente; **Indirecta**, cuando la historia se deriva de un problema mencionado, aunque la solución no fue planteada en las entrevistas; y **Propuesta**, cuando corresponde a una capacidad incorporada por el equipo dentro del alcance IoT de la solución o como requisito habilitante de otras historias.

| **Historia de Usuario** | **User Persona** | **Necesidad / Pain Identificado** | **Evidencia** | **Justificación** |
|---|---|---|---|---|
| **US01 – Registrar residente y vincularlo a su unidad** | Administrador | Información de residentes gestionada en Excel y registros manuales. | Directa | César administra 15 edificios usando Excel. Registrar a cada residente y vincularlo a su unidad centraliza esa información en la plataforma. |
| **US02 – Inicio de sesión** | Administrador / Residente | Necesidad de acceso seguro y diferenciado por rol. | Propuesta | Es un requisito habilitante: sin autenticación por rol no es posible separar la gestión del administrador del uso del residente. |
| **US03 – Actualizar información de usuarios** | Administrador | Dificultad para mantener actualizados los datos de residentes. | Directa | Los administradores usan Excel y registros manuales; actualizar los datos desde la plataforma los mantiene centralizados. |
| **US04 – Registrar edificio y unidades** | Administrador | Gestión de múltiples edificios con herramientas separadas. | Directa | César administra 15 edificios con Excel como herramienta principal, lo que evidencia la necesidad de centralizar edificios y unidades. |
| **US05 – Activar/Desactivar cuentas** | Administrador | Control de quién accede a la información de la comunidad. | Propuesta | Se relaciona con la centralización de la gestión de residentes, aunque no fue mencionada explícitamente en las entrevistas. |
| **US06 – Recibir y consultar comunicados** | Residente | Información dispersa entre WhatsApp, correos y otros medios. | Directa | Melina señala que la cantidad de mensajes en WhatsApp dificulta encontrar información relevante. Un historial de comunicados oficiales en la app la ordena. |
| **US07 – Publicar comunicados oficiales** | Administrador | Información dispersa entre WhatsApp, correos y otros medios. | Directa | Los administradores identificaron dificultades para comunicar información de forma organizada. Centralizar los comunicados reduce la dependencia de canales dispersos. |
| **US08 – Seguimiento de visualización de comunicados** | Administrador | Falta de confirmación sobre si los comunicados fueron recibidos. | Directa | Alejandro señaló la falta de confirmación sobre la recepción de comunicados; saber quién los leyó responde directamente a esa necesidad. |
| **US09 – Publicar mensaje en la comunidad** | Residente | Saturación de mensajes en WhatsApp. | Indirecta | Melina señala que la cantidad de mensajes en WhatsApp dificulta encontrar información. Un foro por edificio separa la conversación entre vecinos de los comunicados oficiales. |
| **US10 – Moderar publicaciones del foro** | Administrador | Saturación y desorganización de mensajes en WhatsApp. | Directa | Melina señala la saturación de mensajes en WhatsApp. Un foro moderado mantiene la comunicación ordenada y respetuosa. |
| **US11 – Notificaciones de reservas** | Residente / Administrador | Necesidad de conocer oportunamente las solicitudes y su estado. | Indirecta | La gestión de reservas es uno de los procesos problemáticos de las entrevistas. Las notificaciones evitan depender de mensajes informales para confirmar una reserva. |
| **US12 – Ver disponibilidad de áreas comunes** | Residente / Administrador | Cruces de horarios al reservar áreas comunes. | Directa | Marcelo menciona problemas recurrentes por cruces de horarios. Ver la disponibilidad antes de reservar previene esos conflictos. |
| **US13 – Reservar área común** | Residente | Cruces de horarios y conflictos al reservar. | Directa | Marcelo menciona cruces de horarios recurrentes. La reserva en la plataforma bloquea los horarios ocupados y resuelve las solicitudes simultáneas. |
| **US14 – Aprobar o rechazar reservas** | Administrador | Desorganización en la gestión de reservas. | Directa | Las reservas se realizan con procesos manuales que generan conflictos. La aprobación administrativa permite controlar las solicitudes. |
| **US15 – Cancelar reserva** | Residente / Administrador | Conflictos derivados de cambios en el uso de áreas comunes. | Indirecta | Se deriva de los problemas de gestión manual de reservas. Permite liberar espacios y corregir situaciones por cambios, emergencias o mantenimiento. |
| **US16 – Configurar reglas y estado de área común** | Administrador | Procesos poco organizados para reservar y usar áreas comunes. | Directa | Las entrevistas muestran problemas de organización en las reservas; definir reglas, horarios y estado de cada área regula su uso. |
| **US17 – Recordatorios de pago** | Residente | Pagos realizados fuera de plazo. | Indirecta | Alejandro identifica el seguimiento de pagos como uno de sus principales problemas. Los recordatorios reducen los pagos tardíos antes de que se conviertan en morosidad. |
| **US18 – Ver deuda actual** | Residente | Desconocimiento del monto pendiente de mantenimiento. | Indirecta | Se deriva del problema de seguimiento de pagos señalado por Alejandro. El residente conoce su deuda sin tener que consultar al administrador. |
| **US19 – Registrar pago con comprobante** | Residente | Comprobantes enviados manualmente por WhatsApp o correo. | Directa | Los propietarios envían hoy sus comprobantes por WhatsApp o correo. Adjuntarlos en la plataforma centraliza su revisión. |
| **US20 – Registrar pagos en el sistema** | Administrador | Seguimiento de pagos mediante comprobantes enviados manualmente. | Directa | Alejandro identifica el seguimiento de pagos como uno de sus principales problemas, lo que justifica centralizar el registro de pagos. |
| **US21 – Visualizar residentes morosos** | Administrador | Dificultad para controlar los pagos pendientes. | Directa | La falta de seguimiento eficiente de pagos justifica una vista que identifique a los residentes morosos. |
| **US22 – Generar y exportar reportes financieros** | Administrador | Falta de transparencia en los gastos administrativos. | Directa | Jarol y Marcelo señalan problemas de transparencia de los gastos. Los reportes organizan la información y permiten compartirla con la comunidad. |
| **US23 – Consultar pagos pasados** | Residente | Comprobantes de pago dispersos en distintos canales. | Indirecta | Al enviarse los comprobantes por WhatsApp o correo, el historial queda disperso. Un historial en la app lo centraliza. |
| **US24 – Pagar deuda en línea** | Residente | Pagos y envío de comprobantes manuales. | Indirecta | Se deriva del problema de seguimiento de pagos. El pago en línea elimina el envío manual del comprobante y confirma el pago al instante. |
| **US25 – Resolver pago en verificación** | Administrador | Riesgo de doble cobro cuando la pasarela no responde. | Indirecta | Se deriva del problema de seguimiento de pagos señalado por Alejandro: el administrador confirma el resultado real del cobro antes de liberar o cerrar la deuda. |
| **US26 – Visualizar hero y navegar en la Landing Page** | Visitante | Necesidad de entender rápidamente la propuesta de valor. | Propuesta | Requisito de la solución: la landing page presenta Edifika a los prospectos antes de su registro. |
| **US27 – Visualizar sección de funcionalidades** | Visitante | Evaluar si la plataforma se adapta a sus necesidades. | Propuesta | Requisito de la solución: muestra los módulos que resuelven los problemas identificados en las entrevistas. |
| **US28 – Acceder a la aplicación desde la Landing Page** | Administrador / Residente | Acceso directo a la aplicación de cada segmento. | Propuesta | Requisito de la solución: dirige al administrador a la web y al residente a la app móvil. |
| **US29 – Registrar tarjeta RFID de acceso** | Administrador | Gestión centralizada del acceso a áreas comunes. | Propuesta | Se relaciona con la gestión de áreas comunes, aunque las entrevistas no mencionan el uso de tarjetas de acceso. |
| **US30 – Desactivar acceso por morosidad** | Sistema / Administrador | Relación entre pagos pendientes y uso de áreas comunes. | Indirecta | Se deriva del problema de seguimiento de morosidad, aunque las entrevistas no plantean restringir el acceso por falta de pago. |
| **US31 – Configurar horarios de riego automático** | Administrador | Mantenimiento de áreas verdes. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US32 – Riego automático según humedad del suelo** | Sistema | Desperdicio de agua en el riego de áreas verdes. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US33 – Otorgar acceso temporal por reserva aprobada** | Residente | Ingreso a áreas comunes dependiente del administrador. | Indirecta | Se deriva del problema de gestión manual de reservas (US14). El acceso por reserva aprobada evita la intervención manual del administrador. |
| **US34 – Consultar bitácora de accesos** | Administrador | Falta de trazabilidad sobre el uso de áreas comunes. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US35 – Apertura remota de acceso** | Administrador | Atención de emergencias o fallas del lector. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US36 – Controlar manualmente el riego** | Administrador | Situaciones que la programación de riego no contempla. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US37 – Encendido automático de luces por movimiento** | Sistema | Consumo energético innecesario en áreas comunes. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US38 – Configurar reglas de automatización de iluminación** | Administrador | Consumo energético innecesario en áreas comunes. | Propuesta | Amplía US37 con condiciones de lux, horario y prioridad. Funcionalidad incorporada dentro del alcance IoT. |
| **US39 – Encender o apagar luces manualmente (override)** | Residente / Administrador | Falta de control manual sobre la iluminación. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US40 – Encender área al iniciar una reserva** | Sistema | Preparación de las áreas comunes reservadas. | Propuesta | Integra Reservation con Smart Lighting & Automation. Funcionalidad incorporada dentro del alcance IoT. |
| **US41 – Visualizar consumo de energía y agua** | Administrador | Falta de transparencia y control de los gastos del edificio. | Indirecta | Se relaciona con la preocupación por la transparencia de los gastos que señalan Jarol y Marcelo (US22). |
| **US42 – Alertar consumo anómalo** | Administrador | Detección tardía de consumos irregulares. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US43 – Detectar falla de dispositivo** | Administrador | Mantenimiento correctivo tardío de luminarias y válvulas. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US44 – Monitorear estado de conexión de dispositivos** | Administrador | Falta de visibilidad sobre la infraestructura IoT. | Propuesta | Complementa TS16 y TS17 desde la perspectiva del administrador. Funcionalidad incorporada dentro del alcance IoT. |
| **US45 – Leer tarjeta RFID y resolver el acceso** | Residente | Ingreso a áreas comunes sin intervención manual. | Propuesta | Se relaciona con US29 y US33. Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US46 – Abrir la cerradura eléctrica y re-bloquearla** | Sistema | Seguridad física de las áreas comunes. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US47 – Mostrar el resultado del acceso en el punto de acceso** | Residente | Falta de retroalimentación inmediata al ingresar. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US48 – Registrar y sincronizar datos generados sin conexión** | Administrador | Pérdida de trazabilidad ante caídas de internet. | Propuesta | Responde a la decisión de operación offline del Edge Gateway (Capítulo IV). |
| **US49 – Registrar y autenticar nodos ESP32** | Administrador | Control de los dispositivos que forman parte del edificio. | Propuesta | Funcionalidad incorporada dentro del alcance IoT de la solución. |
| **US50 – Sincronizar credenciales, reservas, reglas y blacklist** | Sistema | Continuidad del acceso, la iluminación y el riego ante caídas de internet. | Propuesta | Responde a la decisión de operación offline del Edge Gateway (Capítulo IV). |

De las historias de usuario, 15 tienen evidencia directa en las entrevistas, 11 se derivan de problemas mencionados y 24 corresponden a capacidades propuestas por el equipo, principalmente las del alcance IoT. Estas últimas deberán validarse con los usuarios en las siguientes iteraciones del proyecto.


## 3.2. Impact Mapping

El Impact Map muestra la relación entre el objetivo de negocio de Edifika y los cambios de comportamiento esperados en los usuarios clave: administradores y residentes. A partir de este análisis, se definen los impactos principales que la solución busca generar en cada tipo de usuario y los entregables necesarios para lograrlo, los cuales están directamente vinculados a las historias de usuario planteadas. Esto permite asegurar que cada funcionalidad desarrollada responda a necesidades reales y contribuya al cumplimiento del objetivo del sistema.

<img src="assets/img/impact/mapping.png" alt="logo" width="500"/>

## 3.3. Product Backlog

En esta sección se presenta el Product Backlog de Edifika como una recopilación ordenada de las historias definidas en 3.1. La estimación se realizó mediante story points basados en la escala de Fibonacci, con el fin de tener una planificación clara y una gestión eficiente del desarrollo.

El backlog contiene la totalidad del alcance vigente del proyecto. El orden sigue dos criterios: primero la prioridad MoSCoW (Must Have, Should Have, Could Have) y, dentro de cada prioridad, las dependencias técnicas, de modo que la technical story de configuración base de cada microservicio precede a las user stories que se implementan sobre él.

| Orden | User Story ID | Título | Descripción | Epic ID | Story Points | MoSCoW |
|-------|--------------|--------|-------------|---------|--------------|--------|
| 1 | TS01 | Configuración de autenticación y autorización con JWT | Como desarrollador, quiero implementar autenticación y autorización basada en JWT en el microservicio IAM, para que solo los usuarios autorizados (administradores y residentes) accedan a los endpoints protegidos según su rol. | EP05 | 5 | Must Have |
| 2 | TS02 | Implementación de endpoints de registro e inicio de sesión con validaciones | Como desarrollador, quiero implementar los endpoints de registro e inicio de sesión del microservicio IAM con validaciones estrictas de datos, para garantizar que solo administradores con información válida puedan autorregistrarse. | EP05 | 5 | Must Have |
| 3 | TS03 | Implementación de endpoints de gestión de usuarios | Como desarrollador, quiero implementar los endpoints CRUD de gestión de usuarios y consulta de roles en el microservicio IAM, para que los administradores puedan consultar, actualizar y desactivar usuarios del sistema. | EP05 | 8 | Must Have |
| 4 | TS04 | Configuración del API Gateway como punto de entrada centralizado | Como desarrollador, quiero configurar un API Gateway que centralice todas las solicitudes de la Web Application y la Mobile Application hacia los microservicios de Edifika, para gestionar el enrutamiento, la validación de tokens JWT y las políticas de seguridad en un único punto de acceso. | EP05 | 5 | Must Have |
| 5 | TS05 | Configuración de base de datos independiente por microservicio | Como desarrollador, quiero que cada microservicio de Edifika tenga su propia base de datos, implementada como un schema y una credencial exclusivos dentro de la instancia PostgreSQL, para garantizar el aislamiento de datos y la autonomía de cada dominio. | EP05 | 8 | Must Have |
| 6 | TS15 | Configuración de CORS en el API Gateway | Como desarrollador, quiero configurar las políticas de CORS en el API Gateway para que la Web Application y la Mobile Application se comuniquen con el backend en desarrollo y producción. | EP05 | 3 | Must Have |
| 7 | TS13 | Comunicación entre microservicios mediante REST con manejo de fallos | Como desarrollador, quiero implementar la comunicación síncrona entre microservicios mediante REST con manejo controlado de errores, para los casos en que el servicio que llama necesita la respuesta para continuar. | EP05 | 5 | Must Have |
| 8 | TS06 | Configuración base del microservicio Residential Management | Como desarrollador, quiero crear el microservicio de gestión residencial para administrar edificios, unidades y la vinculación de residentes con sus unidades, de forma independiente del microservicio IAM. | EP05 | 5 | Must Have |
| 9 | US02 | Inicio de sesión | Como usuario, quiero iniciar sesión para acceder a mi información. | EP01 | 2 | Must Have |
| 10 | US04 | Registrar edificio y unidades | Como administrador, quiero configurar la estructura del edificio (torres/unidades). | EP01 | 8 | Must Have |
| 11 | US01 | Registrar residente y vincularlo a su unidad | Como administrador, quiero registrar a un residente y vincularlo a su unidad para que pueda acceder a la aplicación móvil de su edificio. | EP01 | 5 | Must Have |
| 12 | US03 | Actualizar información de usuarios | Como administrador, quiero editar datos de usuarios para corregir errores. | EP01 | 2 | Must Have |
| 13 | US05 | Activar/Desactivar cuentas | Como administrador, quiero controlar quién tiene acceso a la app. | EP01 | 3 | Must Have |
| 14 | TS07 | Configuración base del microservicio Payment con integración Culqi | Como desarrollador, quiero crear el microservicio de pagos para gestionar deudas y pagos del condominio integrándose con Culqi mediante un Saga, garantizando que una deuda nunca se cobre dos veces ni quede en un estado inconsistente. | EP05 | 8 | Must Have |
| 15 | US18 | Ver deuda actual | Como residente, quiero saber cuánto debo pagar de mantenimiento. | EP04 | 3 | Must Have |
| 16 | US24 | Pagar deuda en línea | Como residente, quiero pagar mi deuda con tarjeta de crédito, débito o Yape desde la app. | EP04 | 8 | Must Have |
| 17 | US19 | Registrar pago con comprobante | Como residente, quiero subir la foto de mi voucher para validar un pago realizado fuera de línea. | EP04 | 5 | Must Have |
| 18 | US20 | Registrar pagos en el sistema | Como administrador, quiero registrar manualmente los pagos de los residentes para mantener el sistema actualizado. | EP04 | 3 | Must Have |
| 19 | US21 | Visualizar residentes morosos | Como administrador, quiero ver la lista de deudores. | EP04 | 5 | Must Have |
| 20 | US25 | Resolver pago en verificación | Como administrador, quiero confirmar o rechazar un pago que quedó en verificación para evitar dobles cobros y liberar la deuda cuando corresponda. | EP04 | 3 | Must Have |
| 21 | TS08 | Configuración base del microservicio Reservation | Como desarrollador, quiero crear el microservicio de reservas para gestionar la disponibilidad y el uso de las áreas comunes, garantizando que no existan reservas duplicadas. | EP05 | 5 | Must Have |
| 22 | US12 | Ver disponibilidad de áreas comunes | Como residente o administrador, quiero ver qué áreas están libres. | EP03 | 5 | Must Have |
| 23 | US13 | Reservar área común | Como residente, quiero separar un espacio para uso personal sin cruces de horario. | EP03 | 8 | Must Have |
| 24 | US14 | Aprobar o rechazar reservas | Como administrador, quiero aprobar o rechazar reservas de áreas comunes para mantener el control sobre su uso. | EP03 | 3 | Must Have |
| 25 | US16 | Configurar reglas y estado de área común | Como administrador, quiero definir las reglas, horarios y estado de cada área común para regular su uso correctamente. | EP03 | 8 | Must Have |
| 26 | TS09 | Configuración base del microservicio Communication | Como desarrollador, quiero crear el microservicio de comunicados para que los administradores publiquen avisos oficiales con trazabilidad de lectura. | EP05 | 5 | Must Have |
| 27 | TS10 | Configuración base del microservicio Notification con Firebase | Como desarrollador, quiero crear el microservicio de notificaciones integrado con Firebase Cloud Messaging para enviar alertas push ante eventos relevantes del sistema. | EP05 | 5 | Must Have |
| 28 | US07 | Publicar comunicados oficiales | Como administrador, quiero difundir noticias a la comunidad. | EP02 | 3 | Must Have |
| 29 | US06 | Recibir y consultar comunicados | Como residente, quiero recibir y consultar la información oficial del condominio. | EP02 | 3 | Must Have |
| 30 | US26 | Visualizar hero y navegar en la Landing Page | Como visitante, quiero ver la propuesta de valor de Edifika y navegar entre secciones para entender rápidamente de qué trata el producto. | EP06 | 2 | Must Have |
| 31 | US28 | Acceder a la aplicación desde la Landing Page | Como usuario, quiero acceder a la aplicación que corresponde a mi rol directamente desde la landing page. | EP06 | 1 | Must Have |
| 32 | TS22 | Publicación y consumo de eventos de dominio mediante el broker | Como desarrollador, quiero implementar la mensajería de eventos de dominio mediante el broker AMQP/MQTT con consumo idempotente, para integrar los contextos sin acoplarlos. | EP05 | 5 | Must Have |
| 33 | TS16 | Configuración base del microservicio IoT Access Management | Como desarrollador, quiero crear el microservicio IoT Access Management para gestionar tarjetas RFID, permisos de acceso por área común, restricciones por morosidad y la auditoría de accesos. | EP05 | 5 | Must Have |
| 34 | US29 | Registrar tarjeta RFID de acceso a áreas comunes | Como administrador, quiero asignar una tarjeta RFID a cada residente para controlar el ingreso a las áreas comunes del edificio. | EP07 | 5 | Must Have |
| 35 | US30 | Desactivar acceso a áreas comunes por morosidad | Como sistema, quiero desactivar automáticamente el acceso de un residente moroso a las áreas comunes para asegurar el cumplimiento de pagos, permitiendo que el administrador lo revierta en casos de emergencia. | EP07 | 5 | Must Have |
| 36 | US33 | Otorgar acceso temporal por reserva aprobada | Como residente, quiero que mi reserva aprobada me habilite automáticamente el ingreso al área común solo durante mi horario, para no depender del administrador para entrar. | EP07 | 5 | Must Have |
| 37 | TS23 | Configuración base del Edge Gateway con Python, Flask, Peewee ORM y SQLite | Como desarrollador, quiero crear el servicio Edge Gateway con Python, Flask, Peewee ORM y SQLite con configuración por variables de entorno y endpoint de salud, para tener una base ejecutable en el equipo del edificio. | EP05 | 5 | Must Have |
| 38 | TS24 | Contrato de mensajes MQTT entre el Edge Gateway y los ESP32 | Como desarrollador, quiero definir y validar el contrato de tópicos y mensajes JSON entre el Edge Gateway y los nodos ESP32, para que firmware y servicio evolucionen sin romperse. | EP05 | 5 | Must Have |
| 39 | TS25 | Persistencia local con SQLite y cola de salida | Como desarrollador, quiero almacenar localmente credenciales, reglas, lecturas y eventos pendientes en SQLite, para garantizar la operación offline y la entrega confiable a la nube. | EP05 | 5 | Must Have |
| 40 | TS26 | Firmware base del ESP32 con lectura de sensores y reconexión | Como desarrollador, quiero implementar el firmware base del ESP32 que lea los sensores (RFID, PIR, LDR, ACS712, humedad y flujo), controle los actuadores (cerradura, buzzer, OLED, luminaria y válvula) y mantenga la conexión Wi-Fi y MQTT. | EP05 | 8 | Must Have |
| 41 | TS31 | Contrato de integración entre el Edge Gateway y el backend | Como desarrollador, quiero un contrato de integración entre el Edge Gateway y el backend con entrega por lotes e idempotencia, para transportar la información de los nodos sin pérdidas ni duplicados. | EP05 | 5 | Must Have |
| 42 | TS17 | Comunicación con dispositivos ESP32 a través del Edge Gateway | Como desarrollador, quiero que los microservicios IoT se comuniquen con las placas ESP32 a través del Edge Gateway y el broker MQTT, para recibir lecturas de sensores y enviar comandos de actuación (abrir acceso, encender luces, abrir o cerrar válvulas) de forma confiable. | EP05 | 8 | Must Have |
| 43 | TS21 | Implementación del Edge Gateway con operación sin conexión y sincronización | Como desarrollador, quiero implementar el Edge Gateway que se comunica por MQTT local con los nodos ESP32 y se sincroniza con la nube, para que el condominio siga operando aun sin conexión a internet. | EP05 | 8 | Must Have |
| 44 | US49 | Registrar y autenticar nodos ESP32 | Como administrador, quiero registrar cada ESP32 en el Edge Gateway con sus sensores y actuadores, para que solo los dispositivos autorizados puedan operar. | EP10 | 5 | Must Have |
| 45 | US45 | Leer tarjeta RFID y resolver el acceso | Como residente, quiero acercar mi tarjeta RFID al lector de la puerta para ingresar a un área común sin depender de otra persona. | EP10 | 5 | Must Have |
| 46 | US46 | Abrir la cerradura eléctrica y re-bloquearla automáticamente | Como sistema, quiero energizar la cerradura eléctrica solo el tiempo necesario cuando se concede un acceso, para que la puerta no quede abierta. | EP10 | 5 | Must Have |
| 47 | US48 | Registrar y sincronizar datos generados sin conexión | Como administrador, quiero que los accesos y la telemetría registrados sin internet se sincronicen luego con la nube, para no perder la auditoría ni los datos de consumo. | EP10 | 8 | Must Have |
| 48 | US50 | Sincronizar credenciales, reservas, reglas y blacklist desde la nube | Como sistema, quiero que el Edge Gateway mantenga una copia local de credenciales, reservas vigentes, blacklist y reglas de iluminación y riego, para operar sin depender de internet. | EP10 | 5 | Must Have |
| 49 | US17 | Recordatorios de pago | Como residente, quiero recibir alertas de mis deudas próximas a vencer. | EP04 | 3 | Should Have |
| 50 | US23 | Consultar pagos pasados | Como residente, quiero ver mi historial de transacciones. | EP04 | 2 | Should Have |
| 51 | US15 | Cancelar reserva | Como residente o administrador, quiero cancelar una reserva para liberar el espacio. | EP03 | 3 | Should Have |
| 52 | US11 | Notificaciones de reservas | Como residente o administrador, quiero recibir avisos sobre las reservas de áreas comunes. | EP03 | 3 | Should Have |
| 53 | US08 | Seguimiento de visualización de comunicados | Como administrador, quiero saber quién ha visto los comunicados para asegurar su alcance. | EP02 | 5 | Should Have |
| 54 | TS11 | Configuración base del microservicio Report | Como desarrollador, quiero crear el microservicio de reportes para que los administradores generen y exporten reportes financieros y de consumo del condominio. | EP05 | 8 | Should Have |
| 55 | US22 | Generar y exportar reportes financieros | Como administrador, quiero generar y descargar el reporte de ingresos, deudas pendientes y morosidad del edificio. | EP04 | 8 | Should Have |
| 56 | US27 | Visualizar sección de funcionalidades | Como visitante, quiero ver las funcionalidades principales de Edifika para evaluar si la plataforma se adapta a mis necesidades. | EP06 | 2 | Should Have |
| 57 | TS14 | Documentación de API con Swagger y autenticación JWT | Como desarrollador, quiero integrar Swagger con soporte de autenticación JWT en cada microservicio, para que los endpoints estén documentados y puedan probarse desde una interfaz gráfica. | EP05 | 3 | Should Have |
| 58 | TS27 | Seguridad de la comunicación del Edge Gateway | Como desarrollador, quiero asegurar la comunicación entre los ESP32, el Edge Gateway y la nube, para evitar accesos o comandos no autorizados. | EP05 | 5 | Should Have |
| 59 | TS28 | Estandarización de marcas de tiempo y sincronización de reloj | Como desarrollador, quiero que todos los componentes registren las marcas de tiempo en UTC (ISO 8601), las muestren en America/Lima y mantengan el reloj sincronizado, para que los permisos por horario y los eventos sean confiables. | EP05 | 5 | Should Have |
| 60 | US34 | Consultar bitácora de accesos | Como administrador, quiero consultar la bitácora de intentos de acceso a las áreas comunes para auditar quién ingresó y detectar accesos no autorizados. | EP07 | 3 | Should Have |
| 61 | US47 | Mostrar el resultado del acceso en el punto de acceso | Como residente, quiero ver en la pantalla OLED y escuchar una señal sonora con el resultado de mi acceso, para saber si puedo pasar y por qué. | EP10 | 3 | Should Have |
| 62 | TS18 | Configuración base del microservicio Smart Lighting & Automation | Como desarrollador, quiero crear el microservicio Smart Lighting & Automation para gestionar luminarias, reglas de automatización y comandos de override de forma independiente de los demás microservicios. | EP05 | 5 | Should Have |
| 63 | US37 | Encendido automático de luces por movimiento | Como sistema, quiero encender automáticamente las luces de áreas comunes al detectar movimiento para mejorar la seguridad y el ahorro energético del edificio. | EP08 | 3 | Should Have |
| 64 | US38 | Configurar reglas de automatización de iluminación | Como administrador, quiero configurar reglas de iluminación por área común (presencia, umbral de lux, franja horaria, tiempo de apagado y prioridad) para automatizar el uso eficiente de la energía. | EP08 | 5 | Should Have |
| 65 | US40 | Encender área al iniciar una reserva | Como sistema, quiero encender automáticamente las luces del área reservada al iniciar la reserva, para que el residente encuentre el espacio listo para su uso. | EP08 | 3 | Should Have |
| 66 | TS19 | Configuración base del microservicio IoT Telemetry & Analytics con TimescaleDB | Como desarrollador, quiero crear el microservicio de telemetría con almacenamiento en TimescaleDB para ingerir lecturas de sensores y resolver consultas analíticas con baja latencia. | EP05 | 8 | Should Have |
| 67 | US44 | Monitorear estado de conexión de dispositivos | Como administrador, quiero ver el estado de conexión de todos los dispositivos IoT del edificio, para saber cuáles requieren atención. | EP09 | 5 | Should Have |
| 68 | US41 | Visualizar consumo de energía y agua | Como administrador, quiero visualizar el consumo de energía (kWh) y agua (litros) por área común y periodo, para identificar dónde se puede reducir el gasto. | EP09 | 8 | Should Have |
| 69 | TS20 | Configuración base del microservicio Smart Irrigation | Como desarrollador, quiero crear el microservicio Smart Irrigation para gestionar zonas de riego, programaciones, umbrales de humedad y overrides manuales de forma independiente de los demás microservicios. | EP05 | 5 | Should Have |
| 70 | US31 | Configurar horarios de riego automático | Como administrador, quiero configurar los horarios y la duración del riego de cada zona verde para optimizar el mantenimiento del edificio. | EP07 | 3 | Should Have |
| 71 | US32 | Riego automático según humedad del suelo | Como sistema, quiero activar el riego según la humedad del suelo para evitar el desperdicio de agua en las áreas verdes. | EP07 | 5 | Should Have |
| 72 | TS29 | Despliegue del Edge Gateway con Docker Compose | Como desarrollador, quiero desplegar el Edge Gateway, el broker MQTT y un backend simulado con Docker Compose, para ejecutar y demostrar la solución con un solo comando. | EP05 | 5 | Should Have |
| 73 | TS30 | Simulador de nodos ESP32 para pruebas sin hardware | Como desarrollador, quiero un simulador de nodos ESP32 que respete el contrato MQTT, para probar el Edge Gateway sin depender del hardware físico. | EP05 | 3 | Should Have |
| 74 | TS32 | Pruebas automatizadas del Edge Gateway | Como desarrollador, quiero una suite de pruebas automatizadas del Edge Gateway que no dependa del broker ni de la red, para detectar regresiones antes de cada integración. | EP05 | 5 | Should Have |
| 75 | TS12 | Configuración base del microservicio Messaging / Forum | Como desarrollador, quiero crear el microservicio de foro para que los residentes publiquen mensajes en el foro de su edificio con un límite de una publicación diaria. | EP05 | 5 | Could Have |
| 76 | US09 | Publicar mensaje en la comunidad | Como residente, quiero escribir en el foro de mi edificio. | EP02 | 3 | Could Have |
| 77 | US10 | Moderar publicaciones del foro | Como administrador, quiero ocultar publicaciones inapropiadas del foro para mantener un ambiente respetuoso. | EP02 | 3 | Could Have |
| 78 | US35 | Apertura remota de acceso | Como administrador, quiero abrir remotamente un acceso desde la aplicación web para atender situaciones excepcionales sin desplazarme al lector. | EP07 | 5 | Could Have |
| 79 | US36 | Controlar manualmente el riego | Como administrador, quiero activar o detener manualmente el riego de una zona para atender situaciones que la programación no contempla. | EP07 | 3 | Could Have |
| 80 | US39 | Encender o apagar luces manualmente (override) | Como residente con una reserva vigente o como administrador, quiero encender o apagar manualmente las luces de un área por un tiempo determinado, para cubrir situaciones que la automatización no contempla. | EP08 | 5 | Could Have |
| 81 | US42 | Alertar consumo anómalo | Como administrador, quiero recibir una alerta cuando el consumo de un área se desvíe de su comportamiento habitual, para investigar posibles fallas o usos indebidos. | EP09 | 8 | Could Have |
| 82 | US43 | Detectar falla de dispositivo | Como administrador, quiero ser notificado cuando un dispositivo no funcione pese a haber recibido una orden, para repararlo oportunamente. | EP09 | 5 | Could Have |

**Resumen del Product Backlog**

| MoSCoW | User Stories | Technical Stories | Total de ítems | Story Points |
|---|---|---|---|---|
| Must Have | 27 | 21 | 48 | 244 |
| Should Have | 16 | 10 | 26 | 116 |
| Could Have | 7 | 1 | 8 | 37 |
| **Total** | **50** | **32** | **82** | **397** |

**Análisis de costos y viabilidad económica del despliegue Edge por edificio**

La propuesta IoT de Edifika exige instalar hardware en cada edificio: un Edge Gateway y los nodos ESP32 de acceso, iluminación y riego. Para comprobar que ese despliegue es viable, se estimó la inversión inicial (CAPEX) de un **edificio de referencia de 40 departamentos** con 3 áreas comunes con control de acceso (por ejemplo piscina, gimnasio y salón de usos múltiples), 4 zonas de iluminación inteligente y 1 zona de riego. Los precios corresponden a la tienda peruana Naylamp Mechatronics (consulta de octubre de 2026); los ítems marcados con (*) son estimaciones del equipo.

| Componente | Nodo de acceso (S/) | Nodo de iluminación (S/) | Nodo de riego (S/) |
|---|---|---|---|
| ESP32 DevKit V1 | 35.00 | 35.00 | 35.00 |
| Lector RFID RC522 | 20.00 | — | — |
| Cerradura eléctrica 12 VDC | 35.00 | — | — |
| Sensor magnético de puerta MC-38 | 5.00 | — | — |
| Pantalla OLED 0.96" SSD1306 | 25.00 | — | 25.00 |
| Buzzer activo 5 VDC | 2.00 | — | 2.00 |
| Módulo RTC DS3231 | 16.00 | — | — |
| Sensor PIR HC-SR501 | — | 8.00 | — |
| Módulo sensor LDR | — | 5.00 | — |
| Sensor de corriente ACS712 20 A | — | 15.00 | — |
| Sensor de humedad de suelo capacitivo v1.2 | — | — | 15.00 |
| Válvula solenoide 1/2" 12 VDC (NC) | — | — | 25.00 |
| Módulo relé 1 canal 5 VDC | 5.00 | 5.00 | 5.00 |
| Fuente de alimentación | 25.00 (12 V 2 A) | 15.00 (5 V)* | 25.00 (12 V 2 A) |
| Caja, borneras y cableado* | 30.00 | 30.00 | 35.00 |
| **Costo por nodo** | **198.00** | **113.00** | **167.00** |

| Edge Gateway (uno por edificio) | Costo (S/) |
|---|---|
| Raspberry Pi 4 Model B 4 GB | 520.00 |
| Case para Raspberry Pi 4 | 40.00 |
| Fuente USB-C 5 V 3 A* | 45.00 |
| Tarjeta microSD 32 GB* | 35.00 |
| **Total Edge Gateway** | **640.00** |

| Inversión inicial del edificio de referencia | Cantidad | Subtotal (S/) |
|---|---|---|
| Edge Gateway | 1 | 640.00 |
| Nodos de acceso | 3 | 594.00 |
| Nodos de iluminación | 4 | 452.00 |
| Nodo de riego | 1 | 167.00 |
| Tarjetas RFID Mifare 1K (S/ 3.00 c/u) | 40 | 120.00 |
| Instalación y configuración (2 técnicos, 1 día)* | 1 | 400.00 |
| **CAPEX total** | | **2,373.00 (≈ USD 641)** |

El costo de operación del Edge en el edificio es marginal: el Raspberry Pi consume alrededor de 5 W (≈ 3.6 kWh al mes, menos de S/ 3 mensuales) y utiliza la conexión a internet que el edificio ya tiene. Se reserva además un 10 % anual del CAPEX (≈ S/ 20 al mes) para reponer componentes dañados.

**Recuperación de la inversión.** En las entrevistas, el administrador César indicó que las soluciones de gestión se pagan entre **2 y 5 USD por departamento al mes**. Se supone que el 30 % de ese ingreso cubre la infraestructura cloud compartida, el soporte y la operación, y que el 70 % restante recupera el hardware del edificio (tipo de cambio referencial: S/ 3.70 por USD).

| Tarifa por departamento | Ingreso mensual (40 dptos.) | Margen para el hardware (70 %) | Meses para recuperar el CAPEX | Tamaño mínimo para recuperar en 12 meses |
|---|---|---|---|---|
| USD 2.00 | S/ 296.00 | S/ 207.20 | 11.5 | 39 departamentos |
| USD 3.50 | S/ 518.00 | S/ 362.60 | 6.5 | 22 departamentos |
| USD 5.00 | S/ 740.00 | S/ 518.00 | 4.6 | 15 departamentos |

El tamaño mínimo se calcula con la parte fija del CAPEX (S/ 2,253, que no depende del número de departamentos) más S/ 3 por tarjeta RFID de cada departamento.

**Conclusión de viabilidad.** Incluso con la tarifa mínima mencionada en las entrevistas, el hardware de un edificio de 40 departamentos se recupera en menos de un año, y con una tarifa intermedia basta con edificios de 22 departamentos. El componente más caro es el Edge Gateway (27 % del CAPEX). Un Raspberry Pi 4 de 2 GB (S/ 300) es suficiente para el servicio Flask, SQLite y el broker MQTT local, y reduce el CAPEX a S/ 2,153. Para edificios pequeños se recomienda cobrar una tarifa de instalación única o un plan IoT con permanencia mínima de 12 meses, de modo que la inversión en hardware no dependa solo de la suscripción mensual.

# Capítulo IV: Solution Software Design

## 4.1. Strategic-Level Domain-Driven Design

### 4.1.1. Design-Level EventStorming

En esta sección se documenta el Design-Level EventStorming realizado en Miro, cuyo objetivo fue pasar de la visión general del negocio obtenida en el Big Picture a un modelo detallado del dominio de Edifika. A partir de los eventos identificados, el equipo los organizó en flujos, incorporó los comandos y actores que los provocan, y añadió las políticas, read models y sistemas que intervienen en cada proceso. El resultado sirvió como base para definir los bounded contexts y diseñar la arquitectura de la solución.

#### 4.1.1.1. Candidate Context Discovery

##### Step 1: Unstructured Exploration

El equipo registró, sin un orden establecido, todos los eventos de dominio relevantes que pueden ocurrir en la operación de un condominio: registro de edificios y residentes, inicio de sesión, generación de deudas y pagos, reservas de áreas comunes, comunicados, notificaciones, control de accesos con tarjeta RFID e iluminación automática. Este paso permitió obtener una visión amplia del dominio antes de estructurarlo.

![Design-Level EventStorming - Step 1](assets/img/big-picture-eventstorming.png)

*Figura. Step 1: Unstructured Exploration. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

##### Step 2: Organize your events

Los eventos se ordenaron en líneas de tiempo que representan el flujo cronológico de cada proceso, incluyendo los caminos alternativos y de error.

**Registro y autenticación.** El administrador completa el formulario de registro y, una vez registrado, inicia sesión y es autenticado hasta cerrar su sesión. El residente sigue un flujo similar: es registrado, se le asigna un rol, inicia sesión y es autenticado. En ambos casos el flujo contempla el rechazo de credenciales, y en el caso del residente, su desactivación.

![Design-Level EventStorming - Step 2 - Registro y autenticación](assets/img/design-eventstorming-step2-1.png)

*Figura. Step 2: flujos de registro y autenticación. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Gestión residencial, reservas y pagos.** El administrador registra el edificio y sus unidades, y vincula a cada residente con su unidad. Para las reservas, se registra el área común y sus reglas; el residente solicita una reserva, que puede ser aceptada, rechazada o cancelada, y en cada caso se notifica al usuario y al administrador. En pagos, el sistema genera la deuda y envía un recordatorio; cuando el residente registra su pago, la deuda se marca como pagada o el pago es rechazado.

![Design-Level EventStorming - Step 2 - Gestión residencial, reservas y pagos](assets/img/design-eventstorming-step2-2.png)

*Figura. Step 2: flujos de gestión residencial, reservas y pagos. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**IoT: iluminación y control de accesos.** Cuando se detecta movimiento en un área común, las luces se encienden automáticamente y se inicia un temporizador de inactividad; si deja de detectarse movimiento, las luces se apagan. Si falla la conexión del sensor, se envía una notificación de mantenimiento y las luces permanecen en modo seguro; si el administrador activa el interruptor manual, el modo automático se pausa. En el control de accesos, el residente escanea su tarjeta RFID; si es reconocida, el acceso se concede y la puerta se abre. Si la tarjeta no es reconocida, el acceso se rechaza, y si el residente es moroso, el acceso se deniega y se le envía una notificación de deuda.

![Design-Level EventStorming - Step 2 - IoT](assets/img/design-eventstorming-step2-3.png)

*Figura. Step 2: flujos de iluminación y control de accesos. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

##### Step 3: Add commands and actors

Se incorporaron los comandos (azul), que representan las acciones que provocan los eventos, y los actores (amarillo) que los ejecutan.

**Registro y autenticación.** El administrador ejecuta *Completar formulario de registro*, *Iniciar sesión* y *Cerrar sesión*, y registra a los residentes con *Registrar residente*. El residente o inquilino ejecuta *Iniciar sesión* y *Cerrar sesión*.

![Design-Level EventStorming - Step 3 - Registro y autenticación](assets/img/design-eventstorming-step3-1.png)

*Figura. Step 3: comandos y actores de registro y autenticación. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Gestión residencial, reservas y pagos.** El administrador ejecuta *Registrar edificio y unidades* y *Actualizar residente*. El residente ejecuta *Solicitar reserva* y *Registrar pago*.

![Design-Level EventStorming - Step 3 - Gestión residencial, reservas y pagos](assets/img/design-eventstorming-step3-2.png)

*Figura. Step 3: comandos y actores de gestión residencial, reservas y pagos. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**IoT: iluminación y control de accesos.** El administrador ejecuta *Activar interruptor manual* para pausar el modo automático, y el sistema ejecuta *Apagar luces* tras el periodo de inactividad. En el control de accesos, el residente ejecuta *Escanear tarjeta*.

![Design-Level EventStorming - Step 3 - IoT](assets/img/design-eventstorming-step3-3.png)

*Figura. Step 3: comandos y actores de iluminación y control de accesos. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

##### Step 4: Add read models, policies and system commands

Se añadieron las políticas (morado), que definen las reglas de negocio que disparan o restringen acciones; los read models (verde), que representan la información que el actor consulta para decidir; y los sistemas (rosado) que ejecutan comandos automáticos.

**Registro y autenticación.** Se definieron dos políticas: el rol de quien completa el registro inicial siempre debe ser administrador, y un residente desactivado no puede iniciar sesión. La autenticación es ejecutada por el sistema.

![Design-Level EventStorming - Step 4 - Registro y autenticación](assets/img/design-eventstorming-step4-1.png)

*Figura. Step 4: políticas y sistema de registro y autenticación. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Gestión residencial, reservas y pagos.** Se definieron tres read models: *Directorio de unidades y residentes*, que el administrador consulta al registrar edificios y unidades; *Calendario de reservas*, que el residente consulta antes de solicitar una reserva; y *Estado de cuenta del residente*, que resume sus deudas y pagos. La política de pagos establece que el pago solo se registra si el formato del comprobante es válido, y el sistema es quien registra el pago y marca la deuda como pagada.

![Design-Level EventStorming - Step 4 - Gestión residencial, reservas y pagos](assets/img/design-eventstorming-step4-2.png)

*Figura. Step 4: read models, políticas y sistema de gestión residencial, reservas y pagos. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**IoT: iluminación y control de accesos.** En iluminación, la política establece que, si no se detecta movimiento durante 3 minutos, se apagan las luces, y el sistema detecta tanto el movimiento como las fallas de conexión del sensor. En control de accesos, la política establece que, si el residente no es moroso, siempre se le otorga el acceso, y el sistema es quien valida la tarjeta RFID escaneada.

![Design-Level EventStorming - Step 4 - IoT](assets/img/design-eventstorming-step4-3.png)

*Figura. Step 4: políticas y sistema de iluminación y control de accesos. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

#### Bounded Contexts

Finalmente, los eventos, comandos y políticas se agruparon en bounded contexts con límites claros, de modo que cada uno tenga una responsabilidad única y pueda evolucionar y desplegarse de forma independiente.

**Bounded Context: IAM.** Registro, autenticación, asignación de roles y cierre de sesión de administradores y residentes.

![Bounded Context IAM](assets/img/bc-iam.png)

**Bounded Context: Residential Management.** Registro de edificios y unidades, y vinculación y actualización de residentes.

![Bounded Context Residential Management](assets/img/bc-residential-management.png)

**Bounded Context: Payment.** Generación de deudas, recordatorios, registro y validación de pagos, y detección de morosidad.

![Bounded Context Payment](assets/img/bc-payment.png)

**Bounded Context: Reservation.** Registro de áreas comunes y sus reglas, y solicitud, aceptación, rechazo y cancelación de reservas.

![Bounded Context Reservation](assets/img/bc-reservation.png)

**Bounded Context: Communication.** Publicación de comunicados oficiales de la administración.

![Bounded Context Communication](assets/img/bc-communication.png)

**Bounded Context: Messaging / Forum.** Publicaciones y comentarios de los residentes en el foro del edificio.

![Bounded Context Messaging Forum](assets/img/bc-forum.png)

**Bounded Context: Notification.** Creación, envío, lectura y fallo de notificaciones a residentes y administradores.

![Bounded Context Notification](assets/img/bc-notification.png)

**Bounded Context: Report.** Generación y exportación de reportes financieros y de consumo.

![Bounded Context Report](assets/img/bc-report.png)

**Bounded Context: Smart Building.** Agrupa las capacidades IoT del edificio: escaneo y validación de tarjetas RFID con concesión o denegación de acceso, encendido y apagado automático de luces por presencia con temporizador de inactividad, modo seguro e interruptor manual, riego automático según horarios y humedad del suelo, e ingesta de las lecturas de los dispositivos para calcular consumo y detectar anomalías y fallas.

![Bounded Context Smart Building](assets/img/bc-smart-building.png)

En la etapa de arquitectura, Smart Building se refina en cuatro bounded contexts: IoT Access Management, Smart Lighting & Automation, Smart Irrigation e IoT Telemetry & Analytics porque cada capacidad tiene reglas, lenguaje y perfil de carga distintos.

#### 4.1.1.2. Domain Message Flows Modeling

En esta sección se presenta el Domain Message Flows Modeling, técnica que modela cómo los bounded contexts colaboran entre sí para resolver un escenario del negocio, mostrando los mensajes que intercambian. Se apoya en la notación de Domain Storytelling: los actores y bounded contexts se conectan mediante mensajes numerados que indican el orden del flujo. Cada mensaje se clasifica según su tipo: los commands solicitan una acción que cambia el estado de un contexto, los events  informan algo que ya ocurrió y pueden ser consumidos por otros contextos, y las queries  solo leen información sin modificarla. Estos flujos permiten validar las relaciones definidas en el Context Mapping y confirmar qué integraciones son síncronas y cuáles se resuelven por eventos.

**Autenticación de administrador** (Command: `RegisterAdministrator` / `SignIn` → Event: `SessionStarted`)

Este escenario describe cómo un administrador obtiene acceso a la plataforma. El administrador completa el formulario de registro en la Web Application, que envía la solicitud a través del API Gateway hasta IAM/Auth. IAM/Auth registra al usuario con el rol ADMIN y emite el evento de administrador registrado. Luego, el administrador inicia sesión: IAM/Auth valida sus credenciales, genera el token JWT y emite el evento de sesión iniciada, con el que queda habilitado para operar desde la web.

![Domain Story autenticación administrador](assets/img/domain-story-auth-admin.png)

*Figura. Domain Story — el Administrador completa el formulario, que atraviesa el API Gateway hasta IAM/Auth, quien crea el Usuario con rol ADMIN y emite el Token JWT que habilita la sesión.*

**Autenticación de residente** (Command: `LinkResidentToUnit` / `SignIn` → Event: `SessionStarted`)

Este escenario muestra que el residente no puede registrarse por sí mismo. Primero, el administrador registra al residente y lo vincula a su unidad en Residential Management, que emite el evento de residente vinculado. IAM/Auth consume ese evento y crea el usuario con el rol RESIDENT. Recién entonces el residente puede iniciar sesión desde la Mobile Application: la solicitud pasa por el API Gateway, IAM/Auth valida las credenciales, emite el token JWT y registra la sesión iniciada.

![Domain Story autenticación residente](assets/img/domain-story-auth-resident.png)

*Figura. Domain Story — a diferencia del administrador, el residente no se autorregistra: el Administrador registra el vínculo residente–unidad en Residential Management, que lo provee a IAM/Auth; recién entonces el Residente puede autenticarse.*

**Publicación de comunicados** (Command: `PublishAnnouncement` → Event: `AnnouncementPublished` → Policy: notificar residentes)

Este escenario describe cómo un comunicado oficial llega a los residentes. El administrador publica el comunicado en Communication, que lo registra y emite el evento de comunicado publicado. Notification consume ese evento y, siguiendo la política de notificar a los residentes del edificio, crea la notificación y la envía como push al residente. Si el envío falla, Notification registra el fallo y deja la notificación pendiente de reintento, sin afectar la publicación del comunicado.

![Domain Story comunicados](assets/img/domain-story-comunicados.png)

*Figura. Domain Story — el Administrador publica el Comunicado en Communication, que dispara a Notification la creación y entrega de la Notificación Push al Residente; si el envío falla, queda pendiente de reintento.*

**Registro y aprobación de pagos** (Command: `RegisterPayment` → Event: `PaymentConfirmed` / `PaymentRejected`)

Este escenario describe el pago en línea de una deuda. El residente registra el pago en Payment, que toma el monto de la deuda y envía el cargo a Culqi. Culqi responde con el resultado de la transacción. Si la confirma, Payment marca el pago como confirmado, la deuda como pagada, emite la constancia y publica el evento de pago confirmado. Si Culqi la rechaza, Payment marca el pago como rechazado con el motivo, la deuda permanece pendiente y el residente puede reintentar. En ambos casos, Notification consume el evento y avisa al residente del resultado.

![Domain Story pagos](assets/img/domain-story-pagos.png)

*Figura. Domain Story — el Residente registra el Pago en Payment, que lo envía a Culqi; si la transacción se confirma, Payment confirma el Pago, emite la Constancia y publica `PaymentConfirmed` para que Notification avise al Residente; si Culqi la rechaza, el Pago queda rechazado y la Deuda sigue pendiente como compensación.*

**Reserva y aprobación de áreas comunes** (Command: `CreateReservation` / `ApproveReservation` → Event: `ReservationApproved`)

Este escenario describe cómo un residente obtiene acceso a un área común. El residente solicita la reserva en Reservation, que la registra como solicitada. El administrador revisa la solicitud y la aprueba, y Reservation emite el evento de reserva aprobada. A partir de ese evento ocurren dos acciones en paralelo: IoT Access Management habilita el permiso de acceso de la tarjeta RFID del residente para el horario reservado, y Notification le envía la confirmación de la reserva.

![Domain Story reservas](assets/img/domain-story-reservas.png)

*Figura. Domain Story — el Residente solicita la Reserva, el Administrador la aprueba, y Reservation dispara en paralelo la habilitación del Permiso de Acceso (IoT Access Management) y la notificación al Residente.*

**Generación de reportes financieros** (Query: `GetFinancialReport` — solo lectura, sin Command ni Event)

Este escenario describe la obtención de un reporte financiero del edificio. El administrador solicita el reporte a Report, que consulta a Payment los pagos y deudas del periodo. Report consolida la información, genera el reporte y lo devuelve al administrador para su exportación. Como el escenario solo lee información, no modifica el estado de ningún contexto ni requiere políticas ni compensaciones.

![Domain Story reportes](assets/img/domain-story-reportes.png)

*Figura. Domain Story — el Administrador solicita el Reporte Financiero, Report consulta a Payment vía REST, consolida y exporta el reporte de vuelta al Administrador; al ser de solo lectura, no hay Policy ni compensación involucradas.*

#### 4.1.1.3. Bounded Context Canvases

El Bounded Context Canvas es un recurso gráfico dentro del enfoque Domain-Driven Design (DDD) que facilita la definición, comprensión y comunicación precisa de los límites, funciones y componentes esenciales de un Bounded Context. Su uso permite al equipo mantener una visión común del dominio, reconociendo entidades, eventos, comandos y conexiones con otros contextos. Asimismo, gracias a las convenciones que establece, posibilita construir un diseño modular y coherente del sistema.

Los canvas se elaboraron en orden de importancia: primero los contextos de los que depende toda la plataforma (IAM, Residential Management, Payment y Reservation), luego los contextos IoT que sostienen la propuesta de diferenciación (IoT Access Management, Smart Lighting & Automation, Smart Irrigation e IoT Telemetry & Analytics) y por último los contextos de soporte (Communication, Messaging / Forum, Notification y Report). Al final se documenta el Edge API, que no es un bounded context de dominio, pero conecta los dispositivos con los contextos IoT.

### Bounded Context – IAM (Identity & Access Management)

![Bounded Context Canvas IAM](assets/img/bc-canvas-iam.png)

*Figura. Bounded Context Canvas de IAM. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se gestionan el registro de administradores, la creación de usuarios residentes a partir de su vínculo con una unidad, la asignación de roles, el inicio y cierre de sesión, y la emisión del token JWT con el que se accede a los demás contextos.

**Strategic Classification**
- **Generic:** la autenticación y autorización son capacidades comunes a cualquier plataforma; no diferencian a Edifika, pero son la base de acceso a todos los demás contextos.
- **Compliance Enforcer:** su modelo de negocio garantiza que cada usuario acceda solo a las funciones que su rol le permite.
- **Commodity:** se basa en un patrón conocido (usuarios, roles y JWT).

**Domain Role**
Asume el rol de **gateway context**, porque controla la entrada al ecosistema, y de **execution context**, porque valida credenciales y emite tokens.

**Inbound Communication**
- El administrador completa su registro e inicia o cierra sesión desde la Web Application.
- El residente inicia o cierra sesión desde la Mobile Application.
- Residential Management informa el vínculo residente–unidad para que IAM cree el usuario con rol RESIDENT.

**Outbound Communication**
- El token JWT emitido habilita el acceso a todos los bounded contexts a través del API Gateway.
- Un usuario desactivado deja de poder iniciar sesión.

**Capability Analysis**
- **Registro de administrador:** crea el usuario con rol ADMIN.
- **Creación de usuario residente:** crea el usuario con rol RESIDENT solo después de que el administrador lo vincula a una unidad.
- **Autenticación:** valida credenciales y emite el token JWT.
- **Gestión de roles:** asegura que cada operación la ejecute el rol correcto.

### Bounded Context – Residential Management

![Bounded Context Canvas Residential Management](assets/img/bc-canvas-residential-management.png)

*Figura. Bounded Context Canvas de Residential Management. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se registran los edificios y sus unidades, y se vincula a cada residente, propietario o inquilino, con la unidad que ocupa. Es la fuente de verdad de la estructura física y de la población del condominio.

**Strategic Classification**
- **Supporting:** no es el diferenciador del producto, pero todos los procesos del condominio dependen de él.
- **Engagement Creator:** permite que cada residente quede asociado a su edificio y acceda a los servicios que le corresponden.
- **Product:** la gestión de edificios, unidades y residentes es un patrón conocido en administración de condominios.

**Domain Role**
Asume el rol de **specification context**, porque define qué edificios, unidades y residentes existen y cómo se relacionan, y otros contextos dependen de esa definición.

**Inbound Communication**
- El administrador registra edificios y unidades, vincula residentes a unidades y actualiza sus datos desde la Web Application.

**Outbound Communication**
- Un residente vinculado a una unidad habilita su usuario en IAM.
- Los eventos de residente vinculado o retirado permiten a IoT Access Management habilitar o revocar su tarjeta RFID.
- Payment consulta la existencia de la unidad antes de generar una deuda.

**Capability Analysis**
- **Registro de edificios y unidades:** define la estructura física del condominio.
- **Vinculación residente–unidad:** asocia a cada residente con su departamento.
- **Directorio de unidades y residentes:** permite al administrador consultar la población del edificio.

### Bounded Context – Payment

![Bounded Context Canvas Payment](assets/img/bc-canvas-payment.png)

*Figura. Bounded Context Canvas de Payment. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se generan las deudas de mantenimiento de cada unidad, se procesan los pagos en línea a través de Culqi, se emiten las constancias de pago y se determina la morosidad de los residentes.

**Strategic Classification**
- **Core:** el cobro de cuotas y el control de la morosidad son el motivo principal por el que un administrador contrata Edifika.
- **Revenue Generator:** su modelo de negocio asegura la recaudación del condominio y habilita pagos con tarjeta y Yape.
- **Custom Built:** la combinación de deudas, cobro con Culqi, idempotencia y restricción de acceso por morosidad es propia del negocio.

**Domain Role**
Asume el rol de **execution context**, porque ejecuta el cobro y cambia el estado de deudas y pagos.

**Inbound Communication**
- El administrador genera las deudas desde la Web Application.
- El residente consulta su estado de cuenta y registra el pago desde la Mobile Application.
- Report consulta los pagos y deudas para consolidar los reportes financieros.

**Outbound Communication**
- Payment envía el cargo a Culqi a través de un Anticorruption Layer.
- `PaymentConfirmed` y `PaymentRejected` permiten a Notification informar al residente el resultado.
- `ResidentMarkedDelinquent` permite a IoT Access Management restringir el acceso del residente moroso.
- Payment consulta a Residential Management la existencia de la unidad antes de generar una deuda.

**Capability Analysis**
- **Generación de deudas:** registra el monto y la fecha de vencimiento de cada periodo.
- **Pago en línea:** cobra el monto de la deuda a través de Culqi, evitando cobros duplicados con una clave de idempotencia.
- **Compensación:** si Culqi rechaza el cargo, la deuda sigue pendiente; si no responde a tiempo, el pago queda en verificación hasta que el administrador lo resuelva.
- **Morosidad:** detecta deudas vencidas y marca al residente como moroso.

### Bounded Context – Reservation

![Bounded Context Canvas Reservation](assets/img/bc-canvas-reservation.png)

*Figura. Bounded Context Canvas de Reservation. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se registran las áreas comunes y sus reglas de uso, y se gestiona el ciclo de vida de las reservas: solicitud, aprobación, rechazo, cancelación e inicio.

**Strategic Classification**
- **Supporting:** organiza el uso de los espacios compartidos y alimenta a los contextos IoT.
- **Engagement Creator:** mejora la convivencia al ordenar el uso de las áreas comunes.
- **Product:** la reserva de espacios por horario es un patrón conocido.

**Domain Role**
Asume el rol de **execution context**, porque aplica las reglas de aforo y horario, y de **upstream** de los contextos IoT, porque sus eventos habilitan accesos y encienden luces.

**Inbound Communication**
- El residente consulta el calendario de reservas y solicita o cancela una reserva desde la Mobile Application.
- El administrador registra áreas comunes y sus reglas, y aprueba o rechaza reservas desde la Web Application.

**Outbound Communication**
- `ReservationApproved` y `ReservationCancelled` permiten a IoT Access Management habilitar o retirar el permiso de acceso al área.
- `ReservationStarted` permite a Smart Lighting & Automation encender las luces del área reservada.
- Los eventos de reserva permiten a Notification informar al residente y al administrador.

**Capability Analysis**
- **Gestión de áreas comunes:** registra espacios, aforo y tipo de reserva.
- **Ciclo de vida de la reserva:** controla la solicitud, aprobación, rechazo y cancelación.
- **Calendario de reservas:** muestra la disponibilidad en tiempo real.

### Bounded Context – IoT Access Management

![Bounded Context Canvas IoT Access Management](assets/img/bc-canvas-iot-access-management.png)

*Figura. Bounded Context Canvas de IoT Access Management. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se decide y audita quién puede abrir físicamente la puerta de un área común, combinando la tarjeta RFID del residente, sus reservas vigentes y su estado de morosidad.

**Strategic Classification**
- **Core:** el control de accesos con RFID es un pilar de la propuesta de diferenciación IoT.
- **Compliance Enforcer:** asegura que solo los residentes habilitados y al día ingresen a las áreas comunes.
- **Custom Built:** la combinación de RFID, reservas y morosidad no es un producto de catálogo.

**Domain Role**
Asume el rol de **execution context**, porque toma la decisión de acceso, y de **analysis context**, porque registra la auditoría de cada intento.

**Inbound Communication**
- El administrador emite, asigna o revoca tarjetas RFID desde la Web Application.
- Residential Management informa los residentes vinculados o retirados de una unidad.
- Reservation informa las reservas aprobadas y canceladas.
- Payment informa los residentes marcados como morosos.

**Outbound Communication**
- Sincroniza con el Edge API las credenciales activas, las ventanas de reserva y la blacklist.
- `PhysicalAccessGranted` y `PhysicalAccessDenied` permiten a Notification y Report registrar e informar los accesos.

**Capability Analysis**
- **Gestión de credenciales RFID:** emite, activa y revoca tarjetas.
- **Decisión de acceso:** concede el acceso solo si la credencial está activa, el residente no es moroso y existe un permiso vigente para esa área.
- **Auditoría de accesos:** registra cada intento concedido o denegado.

### Bounded Context – Smart Lighting & Automation

![Bounded Context Canvas Smart Lighting & Automation](assets/img/bc-canvas-smart-lighting.png)

*Figura. Bounded Context Canvas de Smart Lighting & Automation. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se controla el encendido y apagado de las luminarias de las áreas comunes combinando presencia, luz ambiental, horarios de reserva y override manual, priorizando el ahorro energético.

**Strategic Classification**
- **Core:** la iluminación automática es parte de la diferenciación IoT.
- **Cost Reducer:** su modelo de negocio reduce el consumo de energía de las áreas comunes.
- **Custom Built:** la precedencia entre presencia, lux, reserva y override es una regla propia del negocio.

**Domain Role**
Asume el rol de **execution context**, porque decide cuándo encender o apagar cada luminaria.

**Inbound Communication**
- El administrador configura reglas de automatización y activa el override manual desde la Web Application.
- Reservation informa el inicio de una reserva.
- IoT Telemetry & Analytics informa la presencia detectada en un área.

**Outbound Communication**
- Envía al Edge API las reglas de automatización y los comandos de override para su ejecución local.
- Publica los eventos de luminaria encendida, apagada y override activado.

**Capability Analysis**
- **Encendido por presencia:** enciende las luces al detectar movimiento si el nivel de lux es bajo.
- **Apagado por inactividad:** apaga las luces tras 3 minutos sin movimiento.
- **Override manual:** suspende temporalmente la automatización.
- **Modo seguro:** mantiene las luces encendidas si falla el sensor.

### Bounded Context – Smart Irrigation

![Bounded Context Canvas Smart Irrigation](assets/img/bc-canvas-smart-irrigation.png)

*Figura. Bounded Context Canvas de Smart Irrigation. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se riegan las áreas verdes del edificio solo cuando es necesario, combinando las programaciones definidas por el administrador con la humedad del suelo medida por los nodos de riego.

**Strategic Classification**
- **Supporting:** complementa la diferenciación IoT, pero no es el motivo principal de contratación.
- **Cost Reducer:** su modelo de negocio ahorra agua y costos de mantenimiento de áreas verdes.
- **Custom Built:** la combinación de calendario y umbral de humedad por zona es una regla propia del negocio.

**Domain Role**
Asume el rol de **execution context**, porque decide cuándo abrir y cerrar la válvula de cada zona.

**Inbound Communication**
- El administrador define zonas, programaciones, umbrales de humedad y override manual desde la Web Application.
- IoT Telemetry & Analytics informa la humedad del suelo medida.
- El Edge API confirma la apertura y el cierre de la válvula.

**Outbound Communication**
- Envía al Edge API las programaciones, los umbrales y los comandos de apertura y cierre de la válvula.
- Los eventos de riego fallido o sensor con falla permiten a Notification alertar al administrador.

**Capability Analysis**
- **Programación de riego:** define horarios por zona sin superposición.
- **Riego por humedad:** omite el riego si la humedad del suelo supera el umbral.
- **Override manual:** permite al administrador activar o detener el riego.
- **Detección de fallas:** registra el riego como fallido si la válvula no confirma la orden.

### Bounded Context – IoT Telemetry & Analytics

![Bounded Context Canvas IoT Telemetry & Analytics](assets/img/bc-canvas-iot-telemetry.png)

*Figura. Bounded Context Canvas de IoT Telemetry & Analytics. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se ingieren las lecturas y logs de todos los dispositivos IoT, se calcula el consumo de energía y agua de las áreas comunes y se detectan anomalías y fallas de dispositivos.

**Strategic Classification**
- **Core:** es el único contexto que produce analítica cuantitativa del edificio.
- **Decision Support:** su modelo de negocio entrega al administrador datos para reducir costos y anticipar fallas.
- **Custom Built:** el cálculo de consumo y la detección de anomalías se diseñaron a medida para este dominio.

**Domain Role**
Asume el rol de **analysis context**, porque transforma lecturas crudas en métricas y alertas.

**Inbound Communication**
- El Edge API reenvía la telemetría y los logs acumulados de los nodos de acceso, iluminación y riego.
- El administrador consulta el dashboard de consumo y el estado de los dispositivos desde la Web Application.

**Outbound Communication**
- Informa a Smart Lighting & Automation la presencia detectada.
- Informa a Smart Irrigation la humedad del suelo medida.
- `AbnormalConsumptionDetected` y `DeviceFailureDetected` permiten a Notification alertar al administrador.
- Aporta a Report las métricas de consumo de energía y agua.

**Capability Analysis**
- **Ingesta de telemetría:** almacena lecturas de alta frecuencia en TimescaleDB.
- **Cálculo de consumo:** obtiene los kWh por integración de la potencia en el tiempo.
- **Detección de anomalías:** compara el consumo contra una línea base.
- **Detección de fallas:** identifica dispositivos desconectados o con lecturas inválidas.

### Bounded Context – Communication

![Bounded Context Canvas Communication](assets/img/bc-canvas-communication.png)

*Figura. Bounded Context Canvas de Communication. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context el administrador redacta y publica comunicados oficiales dirigidos a los residentes del edificio, y se registra su estado de lectura.

**Strategic Classification**
- **Supporting:** facilita la comunicación oficial, pero no es el diferenciador del producto.
- **Engagement Creator:** mantiene informados a los residentes sobre novedades y disposiciones.
- **Product:** la publicación de anuncios es un patrón conocido.

**Domain Role**
Asume el rol de **execution context**, porque publica el comunicado y registra su lectura.

**Inbound Communication**
- El administrador redacta y publica comunicados desde la Web Application.
- El residente lee los comunicados desde la Mobile Application.

**Outbound Communication**
- `AnnouncementPublished` permite a Notification enviar la notificación push a los residentes.
- Las imágenes de los comunicados se almacenan en Cloudinary a través de un Anticorruption Layer.

**Capability Analysis**
- **Publicación de comunicados:** difunde un mensaje oficial a todo el edificio.
- **Confirmación de lectura:** registra qué residentes leyeron cada comunicado.

### Bounded Context – Messaging / Forum

![Bounded Context Canvas Messaging Forum](assets/img/bc-canvas-forum.png)

*Figura. Bounded Context Canvas de Messaging / Forum. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se gestiona el foro privado de cada edificio, donde los residentes publican, comentan e interactúan entre ellos.

**Strategic Classification**
- **Generic:** el foro comunitario es una capacidad ampliamente disponible.
- **Engagement Creator:** fortalece la comunidad del edificio.
- **Commodity:** se basa en un patrón estándar de muro con publicaciones y comentarios.

**Domain Role**
Asume el rol de **execution context**, porque registra publicaciones y comentarios.

**Inbound Communication**
- El residente crea publicaciones y comentarios desde la Mobile Application.

**Outbound Communication**
- Los eventos de publicación y comentario creados permiten a Notification avisar a los residentes.
- Las imágenes de las publicaciones se almacenan en Cloudinary a través de un Anticorruption Layer.

**Capability Analysis**
- **Publicaciones:** permite compartir mensajes con texto e imagen.
- **Comentarios:** permite la conversación entre residentes.

### Bounded Context – Notification

![Bounded Context Canvas Notification](assets/img/bc-canvas-notification.png)

*Figura. Bounded Context Canvas de Notification. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se traducen los eventos de dominio de toda la plataforma en notificaciones push entregadas al residente o administrador correspondiente.

**Strategic Classification**
- **Generic:** el envío de notificaciones es una capacidad resuelta en gran parte por Firebase Cloud Messaging.
- **Engagement Creator:** mantiene al usuario informado en tiempo real.
- **Commodity:** delega el envío a un servicio externo.

**Domain Role**
Asume el rol de **downstream context**, porque solo consume eventos de otros contextos y no influye en su estado.

**Inbound Communication**
- Payment informa pagos confirmados y rechazados.
- Reservation informa los eventos de reserva.
- Communication informa los comunicados publicados.
- Messaging / Forum informa las publicaciones y comentarios creados.
- IoT Access Management informa los accesos concedidos y denegados.
- IoT Telemetry & Analytics informa anomalías de consumo y fallas de dispositivos.
- Smart Irrigation informa riegos fallidos y sensores con falla.

**Outbound Communication**
- Envía las notificaciones push a la Mobile Application a través de Firebase Cloud Messaging, mediante un Anticorruption Layer.

**Capability Analysis**
- **Creación de notificaciones:** traduce cada evento a un mensaje comprensible para el usuario.
- **Envío push:** entrega la notificación al dispositivo registrado.
- **Reintento:** si el envío falla, deja la notificación pendiente sin afectar al contexto que originó el evento.
- **Historial:** registra las notificaciones enviadas y leídas.

### Bounded Context – Report

![Bounded Context Canvas Report](assets/img/bc-canvas-report.png)

*Figura. Bounded Context Canvas de Report. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
En este bounded context se consolidan y exportan los reportes financieros, de morosidad y de consumo de recursos del edificio.

**Strategic Classification**
- **Supporting:** apoya la toma de decisiones del administrador.
- **Decision Support:** su modelo de negocio convierte los datos operativos en información para gestionar el edificio.
- **Product:** la generación de reportes es un patrón conocido.

**Domain Role**
Asume el rol de **analysis context**, porque solo lee y consolida información de otros contextos, sin modificar su estado.

**Inbound Communication**
- El administrador solicita y exporta reportes desde la Web Application.
- IoT Telemetry & Analytics aporta las métricas de consumo de energía y agua.
- IoT Access Management aporta los accesos concedidos y denegados.

**Outbound Communication**
- Consulta a Payment los pagos y deudas del periodo.

**Capability Analysis**
- **Reporte financiero:** resume ingresos, deudas pendientes y morosidad.
- **Reporte de consumo:** muestra el uso de energía y agua de las áreas comunes.
- **Exportación:** permite descargar los reportes para compartirlos.

### Edge API

![Canvas Edge API](assets/img/bc-canvas-edge-api.png)

*Figura. Canvas del Edge API. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

**Description**
El Edge API es el gateway instalado en cada condominio que coordina los dispositivos ESP32, cachea las credenciales RFID y las reglas de iluminación y riego, y mantiene la operación aunque se caiga el internet. No es un bounded context de dominio, pero se documenta porque conecta los dispositivos con los contextos IoT.

**Strategic Classification**
- **Supporting:** sostiene la resiliencia offline de los contextos IoT.
- **Compliance Enforcer:** garantiza que los accesos sigan validándose sin conexión.
- **Custom Built:** se diseñó a medida para la operación local del condominio.

**Domain Role**
Asume el rol de **gateway context**, porque traduce entre los dispositivos físicos y el cloud, y actúa como **conformist** del modelo definido por los contextos IoT.

**Inbound Communication**
- IoT Access Management sincroniza credenciales activas, ventanas de reserva y blacklist.
- Smart Lighting & Automation y Smart Irrigation envían reglas, programaciones y comandos de override.
- Los dispositivos ESP32 envían intentos de acceso RFID, presencia, lux, corriente, humedad del suelo y estado de la válvula.

**Outbound Communication**
- Envía a los dispositivos los comandos de apertura de puerta, encendido de luces y apertura o cierre de válvula.
- Reenvía al broker los registros de acceso generados offline y la telemetría acumulada.

**Capability Analysis**
- **Validación offline:** decide accesos con su caché local de credenciales.
- **Ejecución local:** acciona luces y válvulas sin depender del cloud.
- **Sincronización:** reenvía los datos acumulados cuando se restablece la conexión.


### 4.1.2. Context Mapping

El Context Mapping de Edifika muestra cómo se relacionan los doce bounded contexts mediante relaciones upstream (U), que proveen el modelo o los datos, y downstream (D), que dependen de ellos. IAM actúa como Open Host Service (OHS): expone una API estable de autenticación y emite el JWT con el que todos los contextos identifican al usuario y su rol. Residential Management también es OHS, ya que publica la información de edificios, unidades y residentes que consumen Payment, para validar la unidad antes de generar una deuda, e IoT Access, para habilitar o revocar tarjetas RFID. Payment aplica un Anticorruption Layer (ACL) para traducir los datos de Residential Management y de la pasarela Culqi a su propio modelo, y actúa como upstream de IoT Access, al que informa la morosidad de los residentes, y de Report, que construye sus reportes financieros a partir de los pagos y deudas. IoT Access también aplica un ACL, porque combina en una sola regla de acceso los datos que recibe de Residential Management, Payment y Reservation. Reservation es upstream de IoT Access y Smart Lighting, a los que comunica las reservas aprobadas e iniciadas para habilitar el acceso y encender las luces del área común. IoT Telemetry es upstream de Smart Lighting y Smart Irrigation, a los que entrega las lecturas de presencia y de humedad del suelo que disparan sus automatizaciones. Finalmente, Notification es el principal downstream del sistema: recibe los eventos de Payment, Reservation, Communication, Forum y Smart Irrigation, y aplica un ACL para traducirlos al formato de Firebase Cloud Messaging antes de enviarlos como notificaciones push.

![Bounded Context Canvas Report](assets/img/context-mapping.png)

*Figura. Context mapping. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

### 4.1.3. Software Architecture

La arquitectura se modeló con C4 Model aplicando Diagram-as-Code mediante Structurizr DSL. Un único modelo fuente genera las cuatro vistas que se presentan a continuación (System Landscape, System Context, Container y Deployment), de modo que los cuatro diagramas son consistentes entre sí por construcción.

La solución adopta una arquitectura IoT distribuida en tres niveles: Cloud Computing, Edge Computing y IoT Devices con Embedded Systems, y se apoya en los siguientes estilos y patrones:

- **Microservices Architecture:** escalabilidad y disponibilidad independientes; un fallo en Comunicados no interrumpe Pagos ni el control de accesos.
- **Database per Service:** cada microservicio es dueño exclusivo de su base de datos; ningún servicio lee ni escribe la base de otro.
- **Layered Architecture** dentro de cada microservicio (Interface / Application / Domain / Infrastructure).
- **API Gateway Pattern:** punto único de entrada, validación del JWT, políticas CORS, rate limiting y enrutamiento.
- **Event-Driven Architecture:** un Message & Event Broker AMQP/MQTT desacopla la publicación de eventos de dominio de su consumo. Complementa la comunicación REST entre microservicios. Se usa REST síncrono cuando el emisor necesita la respuesta para continuar (Payment → Residential Management para validar la unidad, y la sincronización Cloud → Edge), y eventos asíncronos cuando el emisor no debe quedar bloqueado ni acoplado al consumidor (todo lo que desemboca en Notification y Report, y los disparadores hacia los contextos IoT).
- **Saga Pattern:** consistencia entre contextos sin locks distribuidos. En Payment, el cobro con Culqi se orquesta con compensación ante rechazo y un estado de verificación ante timeout.
- **CQRS parcial:** Report construye su propio modelo de lectura a partir de los eventos que consume, sin consultar las bases de otros contextos.
- **Ports & Adapters (Anti-Corruption Layer):** las integraciones con Culqi, Cloudinary y Firebase se encapsulan detrás de interfaces propias del dominio.
- **Edge Computing offline-first:** el Edge API cachea credenciales RFID y reservas activas, y mantiene operativos los accesos, la iluminación y el riego aunque se caiga el enlace WAN del condominio.

**Stack tecnológico**

| Categoría | Herramienta / Tecnología |
|---|---|
| IDE | Visual Studio Code / IntelliJ IDEA |
| Landing Page | HTML5 / CSS3 / JavaScript |
| Framework Frontend Web | Angular / TypeScript (SPA) |
| Mobile Application | Flutter / Dart |
| Lenguaje / Framework Backend | Java 21 / Spring Boot / Spring Data JPA |
| API Gateway | Spring Cloud Gateway / Java |
| Edge API | Python / Flask / Peewee ORM / SQLite |
| Embedded Applications | ESP32 / C++ |
| Mensajería y eventos | RabbitMQ (AMQP) / EMQX (MQTT) |
| Base de Datos | PostgreSQL (una base por microservicio) / TimescaleDB (series de telemetría) |
| Servicios externos | Culqi (tarjeta, Yape y billeteras móviles) / Cloudinary (imágenes y comprobantes) / Firebase Cloud Messaging (push) |
| Documentación de APIs | Swagger / OpenAPI 3 con esquema de seguridad Bearer JWT |
| Canal de tiempo real | Server-Sent Events (SSE) sobre el API Gateway |
| Diagramación de arquitectura | Structurizr DSL (C4 Model) |
| Testing | JUnit / Mockito / WireMock |
| CI / CD | GitHub Actions |

#### 4.1.3.1. Software Architecture System Landscape Diagram

El System Landscape ubica a Edifika dentro del ecosistema completo del negocio de administración de condominios. A diferencia del Context Diagram, Edifika no se dibuja como sistema en alcance con boundary propio, sino como un sistema más del ecosistema, al mismo nivel que los servicios de terceros de los que depende. Esta vista permite discutir el modelo de negocio —quién llega al producto y por qué canal— antes de entrar a decisiones técnicas.

![System Landscape Diagram](assets/img/landscape-diagram.png)

*Figura. System Landscape View de Edifika. Elaborado por el equipo aplicando C4 Model con Structurizr DSL (Structurizr, s.f.).*

El ecosistema está compuesto por tres segmentos de personas y tres sistemas externos:

| Elemento | Tipo | Rol en el ecosistema |
|---|---|---|
| Visitor | Person | Prospecto anónimo que consulta el Landing Page para conocer el modelo de negocio, los segmentos objetivo y los precios antes de registrarse. |
| Administrator | Person | Administra residentes, unidades, deudas, aprobación de pagos, reservas, comunicados oficiales, reportes y reglas de automatización IoT desde la Web Application. |
| Owner or Tenant | Person | Consulta y paga deudas, reserva áreas comunes, lee comunicados, participa del foro y accede a las áreas comunes con su tarjeta RFID, desde la Mobile Application. |
| Culqi | Software System | Pasarela de pagos para cuotas de mantenimiento y deudas. Habilita billeteras móviles además de tarjeta de crédito y débito, cumpliendo la táctica de adaptación al contexto local (HTTPS/REST). |
| Cloudinary | Software System | Almacenamiento, optimización y entrega de imágenes de comunicados oficiales, publicaciones del foro y comprobantes de pago (HTTPS/REST). |
| Firebase Cloud Messaging | Software System | Notificaciones push en tiempo real hacia la Mobile Application (HTTPS/REST). |

El **Visitor** cierra el circuito Landing Page → Web/Mobile Application exigido para la solución: llega de forma anónima al sitio estático y desde ahí los call-to-action lo dirigen a la aplicación de su segmento. El Landing Page es el único punto que comparten los tres segmentos; a partir de él, el Administrator opera desde la web y el Owner or Tenant desde el móvil.

#### 4.1.3.2. Software Architecture Context Level Diagrams

El Context Diagram fija el foco en Edifika: la plataforma se representa como una caja única —sin abrir su interior— rodeada por los usuarios que la operan y los sistemas de terceros con los que se integra. Es el nivel con el que se conversa con stakeholders no técnicos: qué entra, qué sale y con quién se habla.

![Context Diagram](assets/img/context-diagram.png)

*Figura. System Context View de Edifika. Elaborado por el equipo aplicando C4 Model con Structurizr DSL (Structurizr, s.f.).*

Las interacciones representadas son:

- **Visitor → Edifika:** consulta el modelo de negocio, el contenido por segmento y los precios.
- **Administrator → Edifika:** gestiona la operación del condominio, aprueba pagos y reservas, configura reglas IoT y monitorea alertas de consumo anómalo y falla de dispositivos.
- **Owner or Tenant → Edifika:** paga deudas, reserva áreas comunes, lee comunicados, usa el foro y accede a las áreas comunes con RFID.
- **Edifika → Culqi:** tokeniza tarjetas y procesa los pagos en línea (HTTPS/REST).
- **Edifika → Cloudinary:** sube y recupera imágenes de comunicados, publicaciones del foro y comprobantes de pago (HTTPS/REST).
- **Edifika → Firebase Cloud Messaging:** envía las notificaciones push a los residentes (HTTPS/REST).

Las integraciones con terceros se acotan a tres: pagos, imágenes y notificaciones push. Las capacidades de acceso físico, iluminación, riego y telemetría se resuelven dentro de Edifika, de modo que ningún flujo crítico del condominio depende de la disponibilidad de un proveedor externo.

#### 4.1.3.3. Software Architecture Container Level Diagrams

El Container Diagram abre la caja de Edifika y muestra los 33 containers de la solución, distribuidos en los tres niveles de la arquitectura IoT. Cada container es una unidad de despliegue independiente. El color identifica su tipo: azul los clientes web y los microservicios de gestión, celeste la Mobile Application, verde azulado el API Gateway, verde los microservicios IoT, morado el broker, azul oscuro las bases de datos, naranja el Edge API y rojo los dispositivos embebidos.

![Container Diagram](assets/img/container-diagram.png)

*Figura. Container View de Edifika. Elaborado por el equipo aplicando C4 Model con Structurizr DSL (Structurizr, s.f.).*

**Decisiones de tecnología por container**

| Nivel | Container | Tecnología | Responsabilidad |
|---|---|---|---|
| Presentación | Landing Page | HTML5 / CSS3 / JavaScript | Sitio estático con el modelo de negocio, segmentos objetivo y precios; redirige al Administrator a la web y al residente a la tienda de aplicaciones. |
| Presentación | Web Application | Angular / TypeScript (SPA) | Solo para administradores: residentes, unidades, deudas, aprobación de pagos, comunicados, reservas, reportes, reglas IoT y dashboards de telemetría. |
| Presentación | Mobile Application | Flutter / Dart | Solo para residentes:** consulta y pago de deudas, reservas, comunicados, foro y notificaciones push en iOS y Android. Tokeniza la tarjeta directamente con Culqi usando la llave pública. |
| Entrada | API Gateway | Spring Cloud Gateway / Java | Punto único de entrada: enrutamiento, validación del JWT, políticas CORS, rate limiting y canal SSE de disponibilidad en tiempo real. |
| Cloud — gestión | IAM / Auth Service | Spring Boot / Spring Data JPA / Java | Autenticación, autorización, roles y emisión de JWT. |
| Cloud — gestión | Residential Management Service | Spring Boot / Spring Data JPA / Java | Edificios, unidades, residentes y su vínculo con las unidades. |
| Cloud — gestión | Payment Service | Spring Boot / Spring Data JPA / Java | Deudas, pagos, comprobantes y cobros con Culqi mediante Saga, con idempotencia por `Idempotency-Key`. |
| Cloud — gestión | Communication Service | Spring Boot / Spring Data JPA / Java | Comunicados oficiales, avisos administrativos y su estado de lectura. |
| Cloud — gestión | Messaging / Forum Service | Spring Boot / Spring Data JPA / Java | Publicaciones, comentarios e interacciones del foro privado de cada edificio. |
| Cloud — gestión | Reservation Service | Spring Boot / Spring Data JPA / Java | Áreas comunes, reglas, disponibilidad, reservas y aprobaciones. |
| Cloud — gestión | Notification Service | Spring Boot / Spring Data JPA / Java | Consume eventos del sistema y envía notificaciones push, incluidas las alertas IoT. |
| Cloud — gestión | Report Service | Spring Boot / Spring Data JPA / Java | Reportes de pagos, morosidad, reservas, actividad de la comunidad y consumo, construidos desde los eventos que consume. |
| Cloud — IoT | IoT Access Management Service | Spring Boot / Spring Data JPA / Java | Credenciales RFID, permisos por área común, restricción por morosidad y auditoría de accesos. |
| Cloud — IoT | Smart Lighting & Automation Service | Spring Boot / Spring Data JPA / Java | Control de luminarias según presencia, lux ambiental, horarios de reserva y override manual. |
| Cloud — IoT | Smart Irrigation Service | Spring Boot / Spring Data JPA / Java | Riego automático de áreas verdes según horarios y umbrales de humedad del suelo, con override manual. |
| Cloud — IoT | IoT Telemetry & Analytics Service | Spring Boot / Spring Data JPA / Java | Ingesta de telemetría y logs de todos los dispositivos, cálculo de consumo de energía (kWh) y agua, y detección de anomalías y fallas. |
| Datos | IAM Database | PostgreSQL | Usuarios, roles y credenciales. |
| Datos | Residential Database | PostgreSQL | Edificios, unidades y asignaciones usuario-unidad. |
| Datos | Payment Database | PostgreSQL | Deudas, pagos y transacciones. |
| Datos | Communication Database | PostgreSQL | Comunicados, confirmaciones de lectura y referencias a imágenes. |
| Datos | Forum Database | PostgreSQL | Foros, publicaciones, comentarios y reacciones. |
| Datos | Reservation Database | PostgreSQL | Áreas comunes, reglas y reservas. |
| Datos | Notification Database | PostgreSQL | Historial de notificaciones, tokens de dispositivo y preferencias. |
| Datos | Report Database | PostgreSQL | Modelos de lectura y agregaciones para reportes. |
| Datos | Access Database | PostgreSQL | Credenciales RFID, permisos, blacklist y auditoría de accesos. |
| Datos | Lighting Database | PostgreSQL | Políticas, horarios y configuración de luminarias. |
| Datos | Irrigation Database | PostgreSQL | Zonas, horarios, umbrales de humedad y configuración de válvulas. |
| Datos | Telemetry Database | TimescaleDB / PostgreSQL | Lecturas de alta frecuencia, logs de dispositivos, métricas de consumo y series ambientales. |
| Asincronía | Message & Event Broker | RabbitMQ (AMQP) / EMQX (MQTT) | Distribuye eventos de dominio (AMQP) y telemetría y comandos de dispositivos (MQTT). |
| Edge | Edge API & Gateway Controller | Python / Flask / Peewee ORM / SQLite | Gateway on-premise: caché de credenciales RFID offline, coordinación local de dispositivos y operación resiliente ante caídas de internet. |
| Device | Common Area Access Controller | ESP32 / Embedded C++ | Lector RFID, sensor magnético de puerta, buzzer y relé de cerradura eléctrica. |
| Device | Smart Lighting & Sensing Node | ESP32 / Embedded C++ | Sensor de presencia PIR, sensor de lux LDR, sensor de corriente ACS712 y relé de luminaria. |
| Device | Smart Irrigation Node | ESP32 / Embedded C++ | Sensor capacitivo de humedad del suelo, sensor de flujo de agua y relé de válvula solenoide. |

**Documentación y contrato de las APIs**

Cada uno de los 12 microservicios expone su propia interfaz Swagger / OpenAPI 3 con el esquema de seguridad Bearer JWT, de modo que los endpoints protegidos se prueban desde la interfaz gráfica con un token válido (TS14). El API Gateway no unifica esas interfaces: cada servicio es dueño del contrato que publica, coherente con el principio de que cada bounded context define su propio modelo.

**Cómo se comunican los containers**

1. **Síncrono REST/JSON sobre HTTPS con JWT:** la Web y la Mobile Application consumen el API Gateway, que enruta hacia los 12 microservicios. Ningún cliente accede directamente a un microservicio.
2. **Asíncrono AMQP:** los microservicios publican eventos de dominio en el broker (`PaymentConfirmed`, `ResidentMarkedDelinquent`, `ReservationApproved`, `AnnouncementPublished`, `PhysicalAccessGranted`, `AbnormalConsumptionDetected`, entre otros) y el broker los entrega a Notification, Report, Access, Lighting e Irrigation.
3. **MQTT local (Edge ↔ Device):** los ESP32 envían al Edge API intentos de acceso RFID, estado de puerta, presencia, lux, corriente, humedad del suelo y flujo de agua; reciben de vuelta comandos de apertura, feedback, PWM de luminaria y apertura o cierre de válvula.
4. **MQTT/AMQP sobre WAN (Edge → Cloud):** el Edge API reenvía al broker los registros de acceso generados offline y la telemetría acumulada.
5. **Sincronización REST (Cloud → Edge):** IoT Access Management sincroniza credenciales activas, ventanas de reserva y blacklist; Smart Lighting y Smart Irrigation envían horarios y overrides manuales.
6. **JDBC/SQL:** cada microservicio persiste únicamente en su propia base de datos; Telemetry escribe y consulta agregaciones en TimescaleDB.
7. **SSE (servidor → cliente):** Reservation publica, a través del API Gateway, un flujo Server-Sent Events con los cambios de disponibilidad de áreas comunes, de modo que un residente vea liberarse u ocuparse un horario sin recargar.
8. **Integraciones externas:** la Mobile Application tokeniza la tarjeta con Culqi; Payment crea el cargo con la llave secreta; Payment, Communication y Forum usan Cloudinary; Notification usa Firebase Cloud Messaging.
9. **Interacción física:** el residente presenta su tarjeta RFID y su movimiento es detectado por el sensor PIR. Es el único canal del diagrama que no es de software.

El cloud concentra las reglas de negocio y la persistencia de largo plazo, el edge concentra la autonomía operativa de cada condominio y los dispositivos se limitan a sensar y actuar. Esa separación permite que un corte de internet degrade la solución en lugar de detenerla: los dispositivos siguen respondiendo al Edge API y este sigue decidiendo con su caché local.

#### 4.1.3.4. Software Architecture Deployment Diagrams

El Deployment Diagram muestra en qué infraestructura se ejecuta cada container. La solución se despliega en seis grupos de infraestructura: los dispositivos de cada segmento de usuario, el PaaS del backend, el proveedor gestionado de bases de datos transaccionales, el proveedor de series temporales, el broker gestionado y la diferencia central respecto de una solución puramente web, el sitio físico del condominio, donde viven el Edge Server y los dispositivos embebidos.

![Deployment Diagram](assets/img/deployment-diagram.png)

*Figura. Deployment View de Edifika — entorno Production. Elaborado por el equipo aplicando C4 Model con Structurizr DSL (Structurizr, s.f.).*

| Deployment Node | Infraestructura | Containers desplegados |
|---|---|---|
| Administrator Workstation → Web Browser | Chrome, Edge o Firefox en Windows / macOS | Landing Page, Web Application |
| Resident Smartphone → Mobile Browser | Chrome o Safari Mobile | Landing Page |
| Resident Smartphone → Mobile OS | Android 10+ / iOS 15+ | Mobile Application |
| Visitor Device → Browser | Cualquier navegador moderno | Landing Page |
| Render → API Gateway Node | Render Web Service / Docker / Java 21 | API Gateway |
| Render → Core Microservices | Render Web Services / Docker / Java 21 | IAM, Residential Management, Payment, Communication, Messaging/Forum, Reservation, Notification, Report |
| Render → IoT Cloud Microservices | Render Web Services / Docker / Java 21 | IoT Access Management, Smart Lighting & Automation, Smart Irrigation, IoT Telemetry & Analytics |
| Supabase → PostgreSQL Instance | PostgreSQL 15 gestionado, un schema y una credencial por servicio | Las 11 bases transaccionales (IAM, Residential, Payment, Communication, Forum, Reservation, Notification, Report, Access, Lighting, Irrigation) |
| Timescale Cloud → TimescaleDB Instance | PostgreSQL + TimescaleDB gestionado | Telemetry Database |
| Managed Broker Cloud | CloudAMQP / EMQX Cloud | Message & Event Broker |
| Culqi Cloud / Cloudinary Cloud / Google Firebase | SaaS | Culqi, Cloudinary, Firebase Cloud Messaging |
| Condominium Site → Edge Server | Raspberry Pi 4 on-premise | Edge API & Gateway Controller |
| Condominium Site → Common Area Door Unit | Hardware embebido por puerta de área común | Common Area Access Controller |
| Condominium Site → Common Area Lighting Unit | Hardware embebido por zona de iluminación | Smart Lighting & Sensing Node |
| Condominium Site → Green Area Irrigation Unit | Hardware embebido por zona de riego | Smart Irrigation Node |

El **Condominium Site** se instala una vez por edificio y hace viable la resiliencia: si se cae el enlace a internet, el Edge Server sigue validando credenciales RFID contra su caché local y accionando cerraduras, luminarias y válvulas; cuando el enlace se restablece, reenvía al broker los registros de acceso y la telemetría acumulada.

La infraestructura responde al perfil de carga de cada pieza: los servicios de Render son *stateless* y escalan horizontalmente sin coordinación; la persistencia transaccional se aísla por schema dentro de Supabase; la telemetría se separa en TimescaleDB porque su perfil —escritura de alta frecuencia y consulta por series temporales, no es compatible con el transaccional; el broker se contrata gestionado para no asumir la operación de su alta disponibilidad; y el sitio del condominio es la única infraestructura que el equipo instala y mantiene físicamente.

## 4.2. Tactical-Level Domain-Driven Design

### 4.2.1. Bounded Context: IAM / Auth

#### 4.2.1.1. Domain Layer

El Domain Layer del bounded context IAM/Auth concentra la lógica de negocio relacionada con la identidad, autenticación y autorización de los usuarios dentro de Edifika. Este contexto se encarga de que cada usuario pueda registrarse, autenticarse y mantener una sesión activa mediante tokens, resguardando en todo momento la unicidad de las credenciales y la correcta asignación de roles.

El agregado principal identificado es:

**User**: concentra los datos y el comportamiento asociado a un usuario del sistema —credenciales, correo, estado de cuenta y rol— y es responsable de aplicar reglas como la validez de la contraseña o la coherencia entre el usuario y su rol.

La validación de reglas de negocio del contexto se apoya en un Domain Service, el **UserDomainService**, que centraliza comprobaciones como la unicidad del correo electrónico antes de registrar o autenticar una cuenta.

## Aggregate: UserAggregate
Representa a un usuario dado de alta en la plataforma, junto con su rol, estado y credenciales de acceso. Es responsable de sus propias transiciones de estado (activar, desactivar, cambiar contraseña).

### Entity: User

| Atributo | Tipo | Descripción |
|---|---|---|
| idUser | Long | Identificador único del usuario. |
| idRol | RolId | Referencia al rol asignado al usuario. |
| user | String | Nombre de usuario utilizado para el acceso. |
| passwordHash | String | Hash de la contraseña, nunca almacenado en texto plano. |
| email | String | Correo electrónico del usuario. |
| status | UserStatus | Estado actual de la cuenta. |
| telefono | String | Número de contacto del usuario. |

### Entity: UserRol

| Atributo | Tipo | Descripción |
|---|---|---|
| idRole | Long | Identificador único del rol. |
| role | String | Nombre del rol. Valores admitidos: `ADMIN` y `RESIDENT`, los dos únicos segmentos objetivo definidos en 1.3 y sobre los que se redactaron las historias de usuario del Capítulo III. |

## ValueObject: Email
Encapsula y valida la estructura del correo electrónico antes de asociarlo a una cuenta de usuario.

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Dirección de correo electrónico. |

## ValueObject: PasswordHash
Protege la contraseña del usuario asegurando que solo su forma hasheada circule dentro del dominio. El algoritmo es **BCrypt**, conforme a TS02.

| Atributo | Tipo | Descripción |
|---|---|---|
| hash | String | Valor resultante del hashing de la contraseña. |

## ValueObject: JwtToken
Representa la sesión activa de un usuario autenticado, junto con su vigencia. Conforme a TS01, el token se firma con **HMAC-SHA256**, transporta `email`, `userId` y `rol` en su payload, y expira a los **7 días** de emitido.

| Atributo | Tipo | Descripción |
|---|---|---|
| token | String | Cadena del token JWT emitido. |
| expiresAt | DateTime | Momento en que el token deja de ser válido. |

## Enumeration

| Enumeración | Valores |
|---|---|
| UserStatus | `ACTIVE`, `INACTIVE`, `BLOCKED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas y métodos |
|---|---|---|
| UserDomainService | Validar las reglas de negocio de usuarios y roles antes de persistir o autenticar una cuenta. | - El correo electrónico debe ser único en todo el sistema.<br>- Las credenciales deben cumplir el formato mínimo de seguridad.<br>- Todo usuario debe tener un rol válido asignado.<br>- Método: `validateUserRules(user)`. |
| LoginAttemptService | Proteger la cuenta frente a ataques de fuerza bruta. | - Tras **5 intentos fallidos consecutivos**, la cuenta pasa a `BLOCKED` durante **15 minutos** (TS01).<br>- Un inicio de sesión exitoso reinicia el contador.<br>- Métodos: `registerFailure(email)`, `isBlocked(email)`. |

#### 4.2.1.2. Interface Layer

Esta capa expone el bounded context al exterior, recibiendo las solicitudes HTTP provenientes del API Gateway y traduciéndolas en comandos hacia la Application Layer.

**AuthController** *(REST Controller)*

Punto de entrada del microservicio de autenticación. Recibe las peticiones de login, registro y validación de sesión desde el API Gateway, valida el formato de entrada (DTOs) y delega la lógica al `AuthApplicationService`.

| Método | Firma | Descripción |
|---|---|---|
| `login` | `login(request: LoginRequest): ResponseEntity<TokenResponse>` | Recibe credenciales y devuelve un JWT si son válidas. |
| `register` | `register(request: RegisterRequest): ResponseEntity<UserResponse>` | Registra un nuevo usuario en el sistema. |
| `validateSession` | `validateSession(token: String): ResponseEntity<Boolean>` | Verifica si un token de sesión sigue siendo válido. |

El `AuthController` no contiene lógica de negocio: su responsabilidad es exclusivamente recibir, validar el formato de la solicitud y delegar.

#### 4.2.1.3. Application Layer

Esta capa coordina los flujos de negocio del bounded context IAM/Auth, sin definir reglas propias, apoyándose en las entidades y servicios del Domain Layer.

Se emplea un Command Handler para procesar las acciones explícitas que un usuario solicita —iniciar sesión o registrarse— y un servicio de soporte encargado de la emisión y verificación de tokens.

Clases principales:

- **AuthApplicationService**: orquesta los comandos de login y registro de usuarios.
- **TokenService**: gestiona la generación y validación de tokens JWT (HMAC-SHA256, vigencia de 7 días) una vez completada la autenticación.
- **AccountLockPolicy**: aplica el bloqueo temporal de la cuenta tras cinco intentos fallidos, apoyándose en `LoginAttemptService`.

## Auth Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Iniciar sesión | AuthApplicationService.handle(LoginCommand) | Verifica las credenciales del usuario y emite un token JWT. |
| Registrar usuario | AuthApplicationService.handle(RegisterCommand) | Aplica las reglas de negocio y crea la cuenta del nuevo usuario. |

## Token Service

| Capability | Método | Descripción |
|---|---|---|
| Generar token | generateToken(user) | Construye y firma un JWT a partir de los datos del usuario autenticado. |
| Validar token | validateToken(token) | Comprueba la firma y el tiempo de vigencia de un token recibido. |

#### 4.2.1.4. Infrastructure Layer

Esta capa implementa el acceso a los recursos externos que el bounded context necesita para operar, garantizando la persistencia de los datos conforme a los contratos definidos en el Domain Layer.

La clase principal de esta capa es:

**UserRepositoryImpl**: implementación concreta de la interfaz `UserRepository`. El hashing de contraseñas con **BCrypt** y la verificación de credenciales se resuelven en esta capa mediante el `PasswordEncoder` de Spring Security, de modo que el dominio solo manipule el Value Object `PasswordHash`. Gestiona el ciclo de vida de los usuarios en la base de datos —guardar, buscar y verificar credenciales— e incorpora validaciones adicionales para evitar registros duplicados de correo antes de crear una cuenta nueva.

## Repositories

### UserRepository

| Método | Descripción |
|---|---|
| save(User user) | Guarda un nuevo usuario o actualiza uno ya existente. |
| findById(Long id) | Recupera un usuario a partir de su identificador único. |
| findByEmail(String email) | Recupera un usuario a partir de su correo electrónico. |
| existsByEmail(String email) | Verifica si ya existe una cuenta registrada con ese correo. |

#### 4.2.1.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes IAM/Auth](assets/img/ComponentView_Auth_Service.png)

*Figura. Diagrama de Componentes — Auth Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.1.6. Bounded Context Software Architecture Code Level Diagrams

En esta sección se presenta el nivel de mayor detalle de implementación del bounded context IAM/Auth, correspondiente al cuarto nivel del C4 Model: el Code diagram. A diferencia de los niveles de Context, Container y Component, este nivel se representa mediante un diagrama de clases UML, ya que detalla la estructura interna de las clases del Domain Layer: sus atributos, métodos, visibilidad y las relaciones con su respectiva multiplicidad. A continuación se desglosa en dos apartados: el diagrama de clases del dominio y el diagrama de diseño de base de datos.

##### 4.2.1.6.1. Bounded Context Domain Layer Class Diagrams

![Clases IAM — vista general](assets/img/iam-auth.png)

*Figura. Diagrama de Clases IAM — vista general. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

![Clases IAM — capas de Aplicación y Dominio](assets/img/iam-auth1.png)

*Figura. Diagrama de Clases IAM — capas de Aplicación y Dominio. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

![Clases IAM — capas de Infraestructura e Interfaces](assets/img/iam-auth2.png)

*Figura. Diagrama de Clases IAM — capas de Infraestructura e Interfaces. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.1.6.2. Bounded Context Database Design Diagram

El modelo entidad-relación del bounded context IAM/Auth está compuesto por las tablas **UserRol** y **User**. UserRol almacena los dos roles disponibles en la plataforma (`ADMIN` y `RESIDENT`, correspondientes a los dos segmentos objetivo de 1.3), mientras que User contiene los datos de cada cuenta registrada —credenciales, correo, estado y teléfono— junto con la referencia al rol que le corresponde.

La relación entre ambas tablas es `UserRol (1) —— (N) User`: un rol puede asignarse a múltiples usuarios, pero cada usuario posee un único rol activo, reforzado por una llave foránea obligatoria (`id_rol`).

El resto de tablas del modelo de Edifika (Payments, Reservations, Forum, Notifications, etc.) hacen referencia a `User.id_user`, pero corresponden a otros bounded contexts del sistema y no forman parte de este diagrama.

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de IAM). Elaborado utilizando LucidChart (LucidChart, s.f.).*

### 4.2.2. Bounded Context: Residential Management

#### 4.2.2.1. Domain Layer

El Domain Layer de Residential Management concentra la lógica de tenencia del sistema: qué administradora opera qué edificio, cómo se estructuran sus unidades y cómo se vincula un residente a la unidad que ocupa.

Los agregados identificados son:

**PropertyManager**: representa a la administradora o junta que opera uno o varios edificios. Es la raíz de tenencia del sistema y responde al caso real recogido en la entrevista, donde un único administrador gestiona 15 edificios.

**Building**: representa el edificio administrado, con su conjunto de torres y unidades.

La regla central del contexto se apoya en el Domain Service **UnitAssignmentService**.

## Aggregate: PropertyManagerAggregate
Representa a la administradora dada de alta en la plataforma y a los edificios que le pertenecen.

### Entity: PropertyManager

| Atributo | Tipo | Descripción |
|---|---|---|
| idPropertyManager | Long | Identificador único de la administradora. |
| name | String | Nombre de la administradora o junta. |

## Aggregate: BuildingAggregate
Representa un edificio administrado y su padrón de unidades.

### Entity: Building

| Atributo | Tipo | Descripción |
|---|---|---|
| idBuilding | Long | Identificador único del edificio. |
| idPropertyManager | PropertyManagerId | Referencia a la administradora propietaria. |
| name | String | Nombre del edificio. |
| address | Address | Dirección del edificio. |

### Entity: Unit

| Atributo | Tipo | Descripción |
|---|---|---|
| idUnit | Long | Identificador único de la unidad. |
| idBuilding | BuildingId | Referencia al edificio al que pertenece. |
| tower | TowerId | Torre a la que pertenece la unidad. |
| number | UnitNumber | Número de la unidad dentro de la torre. |
| status | UnitStatus | Estado actual de la unidad. |

### Entity: ResidentUnitLink

| Atributo | Tipo | Descripción |
|---|---|---|
| idLink | Long | Identificador único del vínculo. |
| idResident | Long | Referencia al residente vinculado. |
| idUnit | UnitId | Referencia a la unidad vinculada. |
| type | LinkType | Tipo de vínculo (`OWNER`/`TENANT`). |
| validFrom | DateTime | Inicio de vigencia del vínculo. |
| validUntil | DateTime | Fin de vigencia del vínculo. |

Este vínculo es el registro que habilita la creación de la cuenta del residente en IAM.

## ValueObject: Address

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Dirección física del edificio. |

## ValueObject: TowerId

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Identificador de la torre dentro del edificio. |

## ValueObject: UnitNumber

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Número de la unidad dentro de la torre. |

## Enumeration

| Enumeración | Valores |
|---|---|
| UnitStatus | `OCCUPIED`, `VACANT` |
| LinkType | `OWNER`, `TENANT` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| UnitAssignmentService | Garantizar la coherencia de la asignación residente–unidad. | - Un residente solo puede vincularse a una unidad activa.<br>- Una unidad no admite dos vínculos `OWNER` simultáneos. |

**Alcance multi-edificio.** Todas las consultas del contexto se resuelven acotadas al `PropertyManager` del administrador autenticado, de modo que un administrador con varios edificios opere sobre todos desde una misma sesión sin que los datos de administradoras distintas se mezclen. El `buildingId` viaja como parte del contexto de la petición hacia los demás microservicios, que lo usan para filtrar sus propios datos.

#### 4.2.2.2. Interface Layer

**BuildingController**: registro y consulta de edificios y sus unidades (US07). **UnitController**: alta, edición y estado de cada unidad. **ResidentUnitController**: vinculación de residentes y verificación de la información por torre y departamento (US04).

#### 4.2.2.3. Application Layer

Esta capa coordina el alta y mantenimiento del padrón de edificios, unidades y vínculos, sin definir reglas propias.

## Residential Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Registrar edificio | BuildingCommandService.handle(RegisterBuildingCommand) | Da de alta un edificio y sus torres. |
| Registrar/editar unidad | UnitCommandService.handle(UpsertUnitCommand) | Crea o actualiza una unidad y su estado. |
| Vincular residente | ResidentUnitCommandService.handle(LinkResidentCommand) | Crea el vínculo residente–unidad aplicando `UnitAssignmentService`. |
| Cerrar vínculo | ResidentUnitCommandService.handle(CloseLinkCommand) | Cierra la vigencia de un vínculo existente. |

`ResidentialQueryService` resuelve el directorio de unidades y residentes. El contexto publica `ResidentLinkedToUnit`, que habilita el alta de la cuenta del residente.

#### 4.2.2.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| PropertyManagerRepository | Persistencia de administradoras. |
| BuildingRepository | Persistencia de edificios. |
| UnitRepository | Persistencia de unidades. |
| ResidentUnitLinkRepository | Persistencia de vínculos residente–unidad. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; `IamProvisioningClient`, cliente REST síncrono que entrega a IAM/Auth el vínculo residente–unidad que autoriza la creación de la cuenta.

#### 4.2.2.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Residential Management](assets/img/ComponentView_Residential_Service.png)

*Figura. Diagrama de Componentes — Residential Management Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.2.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.2.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Residential Management](assets/img/residential_class_diagramm.png)

*Figura. Diagrama de Clases — Residential Management. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.2.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Residential Management). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.3. Bounded Context: Reservation

#### 4.2.3.1. Domain Layer

El agregado principal identificado es:

**Reservation**: solicitud de uso de un área común, con residente, ventana horaria y estado. La regla central del contexto se resuelve mediante el Domain Service **AvailabilityService**.

## Aggregate: ReservationAggregate

### Entity: Reservation

| Atributo | Tipo | Descripción |
|---|---|---|
| idReservation | Long | Identificador único de la reserva. |
| idResident | Long | Residente que solicita la reserva. |
| idCommonArea | CommonAreaId | Área común reservada. |
| timeWindow | TimeWindow | Ventana horaria solicitada. |
| status | ReservationStatus | Estado actual de la reserva. |

## Aggregate: CommonAreaAggregate

### Entity: CommonArea

| Atributo | Tipo | Descripción |
|---|---|---|
| idCommonArea | Long | Identificador único del área común. |
| name | String | Nombre del área. |
| capacity | AreaCapacity | Aforo del área. |
| status | CommonAreaStatus | Estado del área (`ENABLED`/`DISABLED`), que el administrador conmuta según mantenimiento o restricciones (US38). |

### Entity: AreaRule

| Atributo | Tipo | Descripción |
|---|---|---|
| idRule | Long | Identificador único de la regla. |
| idCommonArea | CommonAreaId | Área común a la que aplica. |
| allowedWindow | TimeWindow | Franja horaria permitida. |
| maxDuration | Duration | Duración máxima de una reserva. |
| minAdvance | Duration | Anticipación mínima exigida (US39). |

## ValueObject: TimeWindow

| Atributo | Tipo | Descripción |
|---|---|---|
| start | DateTime | Inicio de la ventana. |
| end | DateTime | Fin de la ventana. |

## ValueObject: AreaCapacity

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Int | Aforo máximo del área común. |

## Enumeration

| Enumeración | Valores |
|---|---|
| ReservationStatus | `PENDING`, `APPROVED`, `REJECTED`, `CANCELLED` |
| CommonAreaStatus | `ENABLED`, `DISABLED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| AvailabilityService | Resolver la disponibilidad de un área común. | - No se admite una reserva fuera de las reglas configuradas del área.<br>- No se admite una segunda reserva sobre una ventana horaria ya ocupada (US19). |

#### 4.2.3.2. Interface Layer

**ReservationController**: solicitud y cancelación de reservas por el residente (US17, US20). **ReservationApprovalController**: aprobación, rechazo y cancelación administrativa (US18, US35). **CommonAreaController**: registro de áreas, habilitación/deshabilitación y configuración de reglas (US38, US39). **AvailabilityQueryController**: disponibilidad del residente y mapa de ocupación global del administrador (US16, US33); expone además el flujo **SSE** al que se suscriben los clientes para recibir los cambios de disponibilidad en vivo (US19 esc. 3). **ReservationHistoryController**: historial y estadísticas de uso (US40).

#### 4.2.3.3. Application Layer

## Reservation Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Solicitar reserva | ReservationCommandService.handle(CreateReservationCommand) | Valida disponibilidad contra `AvailabilityService` antes de crear la reserva. |
| Aprobar/rechazar reserva | ReservationApprovalCommandService.handle(ResolveReservationCommand) | Aplica la decisión administrativa sobre la reserva. |
| Configurar área común | CommonAreaCommandService.handle(UpsertCommonAreaCommand) | Alta, habilitación/deshabilitación y reglas del área. |

`ReservationQueryService` resuelve el calendario de reservas. `ReservationSchedulerService` es el scheduler interno que detecta el inicio de cada ventana horaria. `AvailabilityBroadcastService` reemite los cambios por el canal SSE del API Gateway, de modo que un residente que esté consultando ese horario vea la actualización sin recargar. La unicidad de `(CommonArea, TimeWindow)` se garantiza en la transacción local: el segundo solicitante recibe **HTTP 409**.

## Domain Events Published

| Evento | Disparado por | Consumido por |
|---|---|---|
| ReservationApproved | ReservationApprovalCommandService | Notification, IoT Access Management |
| ReservationStarted | ReservationSchedulerService | Smart Lighting & Automation |
| ReservationCancelled | ReservationApprovalCommandService / ReservationCommandService | Notification |

#### 4.2.3.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| ReservationRepository | Persistencia de reservas. |
| CommonAreaRepository | Persistencia de áreas comunes. |
| AreaRuleRepository | Persistencia de reglas de uso por área. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; publicador AMQP de los eventos del contexto hacia el Message & Event Broker.

#### 4.2.3.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Reservation](assets/img/ComponentView_Reservation_Service.png)

*Figura. Diagrama de Componentes — Reservation Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.3.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.3.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Reservation](assets/img/reservation_class_diagramm.png)

*Figura. Diagrama de Clases — Reservation. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.3.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Reservation). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.4. Bounded Context: Payment

#### 4.2.4.1. Domain Layer

El agregado principal identificado es:

**Payment**: pago de un residente con monto, medio, comprobante adjunto y estado. Las reglas del contexto se resuelven mediante los Domain Services **DebtCalculationService** y **DelinquencyEvaluationService**, este último con efecto fuera del contexto: un residente con deuda vencida se marca moroso, y esa marca restringe su acceso físico.

## Aggregate: PaymentAggregate
Agrupa el pago, su comprobante y la constancia generada al aprobarse.

### Entity: Payment

| Atributo | Tipo | Descripción |
|---|---|---|
| idPayment | Long | Identificador único del pago. |
| idDebt | DebtId | Deuda que el pago cubre. |
| amount | Money | Monto pagado. |
| method | PaymentMethod | Medio de pago utilizado. |
| status | PaymentStatus | Estado del pago. |

### Entity: Debt

| Atributo | Tipo | Descripción |
|---|---|---|
| idDebt | Long | Identificador único de la deuda. |
| idUnit | UnitId | Unidad a la que corresponde la deuda. |
| period | BillingPeriod | Periodo de mantenimiento facturado. |
| amount | Money | Monto adeudado. |
| status | DebtStatus | Estado de la deuda. El estado `IN_REVIEW` es el que exige el Escenario 1 de US22 cuando el residente adjunta su comprobante y este aún no ha sido validado por el administrador. |

### Entity: Receipt

| Atributo | Tipo | Descripción |
|---|---|---|
| idReceipt | Long | Identificador único de la constancia. |
| idPayment | PaymentId | Pago sobre el que se emite. |
| issuedAt | DateTime | Fecha de emisión. |

### Entity: PaymentProof

| Atributo | Tipo | Descripción |
|---|---|---|
| idProof | Long | Identificador único del comprobante. |
| idPayment | PaymentId | Pago al que corresponde. |
| fileReference | String | Referencia al archivo almacenado. |
| reviewResult | String | Resultado de la revisión (US22 esc. 2 contempla el rechazo por comprobante ilegible). |

## Entity independiente: Expense
No forma parte del agregado Payment; registra los egresos del edificio a cargo del administrador. Es el origen de los egresos que US25 y US27 exigen reportar.

| Atributo | Tipo | Descripción |
|---|---|---|
| idExpense | Long | Identificador único del egreso. |
| idBuilding | BuildingId | Edificio al que corresponde el egreso. |
| category | String | Categoría del egreso. |
| provider | String | Proveedor asociado. |
| amount | Money | Monto del egreso. |
| period | BillingPeriod | Periodo del egreso. |

## ValueObject: Money

| Atributo | Tipo | Descripción |
|---|---|---|
| amount | Decimal | Monto monetario. |
| currency | String | Moneda del monto. |

## ValueObject: BillingPeriod

| Atributo | Tipo | Descripción |
|---|---|---|
| month | Int | Mes del periodo de facturación. |
| year | Int | Año del periodo de facturación. |

## Enumeration

| Enumeración | Valores |
|---|---|
| PaymentStatus | `PENDING`, `IN_REVIEW`, `PAID`, `REJECTED` |
| DebtStatus | `PENDING`, `IN_REVIEW`, `SETTLED`, `OVERDUE` |
| PaymentMethod | `CARD`, `YAPE`, `PLIN`, `MANUAL` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| DebtCalculationService | Consolidar el saldo vigente de una unidad. | Suma las deudas y los pagos aplicados de la unidad. |
| DelinquencyEvaluationService | Evaluar la morosidad del residente. | Un residente con deuda vencida se marca moroso; esa marca restringe su acceso físico. |

Repository Pattern aplicado para desacoplar estas reglas de la persistencia.

#### 4.2.4.2. Interface Layer

**DebtController**: consulta de la deuda vigente del residente (US21). **PaymentController**: registro del pago con comprobante y pago en línea (US22, US30). **PaymentApprovalController**: registro y aprobación de pagos por el administrador (US23). **DelinquencyController**: listado de residentes morosos (US24). **PaymentHistoryController**: consulta de pagos pasados (US28). **ExpenseController**: registro de egresos y facturas del edificio por el administrador. **ExpenseSummaryController**: resumen de gastos visible para el residente (US27).

#### 4.2.4.3. Application Layer

## Payment Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Registrar pago | PaymentCommandService.handle(RegisterPaymentCommand) | Registra el pago, deja la deuda en `IN_REVIEW` al recibir el comprobante y orquesta la Saga de aprobación (actualiza el estado → genera la constancia → emite `PaymentApproved`), con compensación si Culqi falla. |
| Registrar egreso | ExpenseCommandService.handle(RegisterExpenseCommand) | Da de alta un egreso o factura del edificio. |
| Evaluar morosidad | DelinquencyCommandService.handle(EvaluateDelinquencyCommand) | Evalúa periódicamente las deudas vencidas. |

`PaymentQueryService` resuelve el estado de cuenta del residente. El contexto publica `PaymentApproved` —consumido por Notification— y `ResidentMarkedDelinquent` —consumido por IoT Access Management—.

#### 4.2.4.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| PaymentRepository | Persistencia de pagos. |
| DebtRepository | Persistencia de deudas. |
| ReceiptRepository | Persistencia de constancias de pago. |
| PaymentProofRepository | Persistencia de comprobantes de pago. |
| ExpenseRepository | Persistencia de egresos y facturas. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; **Adapter Pattern (Anti-Corruption Layer)** hacia la pasarela de pagos **Culqi**, traduciendo su API externa a la interfaz propia del sistema y habilitando tarjeta de crédito/débito junto con los medios locales **Yape y Plin**; **Adapter (ACL) hacia Cloudinary** para almacenar y servir las imágenes de los comprobantes de pago, con degradación independiente —si el adjunto no resuelve, el historial de pagos se sigue sirviendo desde PostgreSQL y la interfaz muestra "Detalles temporalmente no disponibles", según US22 esc. 3—; generador de la constancia de pago y publicador AMQP de los eventos del contexto.

#### 4.2.4.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Payment](assets/img/ComponentView_Payment_Service.png)

*Figura. Diagrama de Componentes — Payment Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.4.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.4.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Payment](assets/img/payment_class.png)

*Figura. Diagrama de Clases — Payment. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.4.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Payment). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.5. Bounded Context: Notification

#### 4.2.5.1. Domain Layer

El agregado principal identificado es:

**Notification**: notificación dirigida a un destinatario, con tipo, canal, contenido y estado. La regla del contexto se resuelve mediante el Domain Service **NotificationRoutingService**.

## Aggregate: NotificationAggregate

### Entity: Notification

| Atributo | Tipo | Descripción |
|---|---|---|
| idNotification | Long | Identificador único de la notificación. |
| recipient | Recipient | Destinatario de la notificación. |
| type | NotificationType | Tipo de notificación. |
| channel | NotificationChannel | Canal de envío. |
| priority | Priority | Prioridad de la notificación. |
| content | String | Contenido de la notificación. |
| status | NotificationStatus | Estado de entrega. |

### Entity: DeviceToken

| Atributo | Tipo | Descripción |
|---|---|---|
| idToken | Long | Identificador único del token. |
| idUser | Long | Usuario propietario del dispositivo. |
| token | String | Token del dispositivo móvil sobre el que se entrega el push. |

### Entity: NotificationPreference

| Atributo | Tipo | Descripción |
|---|---|---|
| idPreference | Long | Identificador único de la preferencia. |
| idUser | Long | Usuario propietario de la preferencia. |
| type | NotificationType | Tipo de notificación configurado. |
| channel | NotificationChannel | Canal preferido para ese tipo (US12). |

## ValueObject: Recipient

| Atributo | Tipo | Descripción |
|---|---|---|
| idUser | Long | Identificador del destinatario. |

## Enumeration

| Enumeración | Valores |
|---|---|
| NotificationChannel | `PUSH`, `EMAIL`, `SMS` |
| Priority | `NORMAL`, `EMERGENCY` |
| NotificationStatus | `PENDING`, `SENT`, `FAILED`, `READ` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| NotificationRoutingService | Resolver destinatarios y canal de entrega según las preferencias vigentes. | Una notificación de prioridad `EMERGENCY` se envía simultáneamente por push y por SMS e ignora las preferencias del usuario, porque US08 exige alcanzar a todos los residentes en menos de 5 segundos. |

#### 4.2.5.2. Interface Layer

**NotificationController**: bandeja y marcado de lectura del residente (US10). **DeviceTokenController**: registro y baja del token del dispositivo. **NotificationPreferenceController**: configuración de notificaciones (US12). Como *Consumers*: `AnnouncementEventConsumer`, `PaymentEventConsumer`, `ReservationEventConsumer`, `AccessEventConsumer`, `TelemetryAlertEventConsumer` e `IncidentEventConsumer`, suscritos por el broker a los seis contextos que publican eventos notificables.

#### 4.2.5.3. Application Layer

**Factory Pattern** (`NotificationFactory`) para crear el tipo de notificación (Push/Email/SMS) según el evento de origen, sin acoplar la creación a la lógica de envío.

## Event Handlers

| Handler | Evento de origen | Descripción |
|---|---|---|
| AnnouncementPublishedEventHandler | AnnouncementPublished | Notifica al residente el nuevo comunicado (US10). |
| PaymentApprovedEventHandler | PaymentApproved | Notifica la aprobación del pago. |
| DebtReminderScheduler | (job periódico) | Recordatorios de pago (US09). |
| ReservationApprovedEventHandler | ReservationApproved | Notifica al residente (US11) y al administrador (US31). |
| PhysicalAccessEventHandler | PhysicalAccessGranted / PhysicalAccessDenied | Notifica eventos de acceso físico. |
| TelemetryAlertEventHandler | AbnormalConsumptionDetected / LuminaireFailureDetected | Notifica alertas de telemetría. |
| IncidentReportedEventHandler | IncidentReported | Avisa al administrador con la ubicación exacta de la incidencia (US08 esc. 2). |
| EmergencyDeclaredEventHandler | EmergencyDeclared | Difusión `EMERGENCY` a todo el edificio por push y SMS en paralelo (US08 esc. 1). |

#### 4.2.5.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| NotificationRepository | Persistencia de notificaciones. |
| DeviceTokenRepository | Persistencia de tokens de dispositivo. |
| NotificationPreferenceRepository | Persistencia de preferencias de notificación. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; cliente de **Firebase Cloud Messaging** (Anti-Corruption Layer) para el envío de notificaciones push y cliente de **Twilio** (Anti-Corruption Layer) para el envío de SMS, ambos invocados en paralelo —no en cascada— cuando la prioridad es `EMERGENCY`, de modo que el fallo o la lentitud de un canal no consuma el presupuesto de 5 segundos del otro; colas de reintento independientes por evento y compensación que marca la notificación como pendiente de reintento si el envío falla, sin afectar el estado del contexto que originó el evento.

#### 4.2.5.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Notification](assets/img/ComponentView_Notification_Service.png)

*Figura. Diagrama de Componentes — Notification Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.5.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.5.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Notification](assets/img/notifications_class.png)

*Figura. Diagrama de Clases — Notification. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.5.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Notification). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.6. Bounded Context: Communication

#### 4.2.6.1. Domain Layer

Los agregados identificados son:

**Announcement** (Comunicado): comunicado oficial con título, contenido, alcance y fecha de publicación. **Poll** (Encuesta): consulta a la comunidad con opciones, votos y estado (US36).

La terna *confirmación de lectura · segmentación · categorización* es la que exige la táctica de comunicación centralizada del proyecto.

## Aggregate: AnnouncementAggregate

### Entity: Announcement

| Atributo | Tipo | Descripción |
|---|---|---|
| idAnnouncement | Long | Identificador único del comunicado. |
| title | String | Título del comunicado. |
| content | String | Contenido del comunicado. |
| scope | AnnouncementScope | Segmentación por tipo de usuario. |
| category | AnnouncementCategory | Categoría del anuncio. |
| publishedAt | DateTime | Fecha de publicación. |

### Entity: ReadReceipt

| Atributo | Tipo | Descripción |
|---|---|---|
| idReceipt | Long | Identificador único del acuse. |
| idAnnouncement | AnnouncementId | Comunicado visualizado. |
| idResident | Long | Residente que lo visualizó. |
| readAt | DateTime | Momento de la lectura. Sostiene el seguimiento de alcance de US15. |

### Entity: Document

| Atributo | Tipo | Descripción |
|---|---|---|
| idDocument | Long | Identificador único del documento. |
| title | String | Título del documento. |
| fileReference | String | Referencia al archivo publicado. |

Normativa legal y manuales del edificio publicados para consulta (US32).

## Aggregate: PollAggregate

### Entity: Poll

| Atributo | Tipo | Descripción |
|---|---|---|
| idPoll | Long | Identificador único de la encuesta. |
| question | String | Pregunta de la encuesta. |
| status | PollStatus | Estado de la encuesta. |

## ValueObject: AnnouncementScope

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Segmento de usuarios al que se dirige el comunicado. |

## ValueObject: PollOption

| Atributo | Tipo | Descripción |
|---|---|---|
| label | String | Texto de la opción. |
| votes | Int | Número de votos recibidos. |

## Enumeration

| Enumeración | Valores |
|---|---|
| AnnouncementCategory | `MANTENIMIENTO`, `ADMINISTRATIVO`, `EVENTO`, `SEGURIDAD`, `OTRO` |
| PollStatus | `OPEN`, `CLOSED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| ReachTrackingService | Consolidar el alcance real de un comunicado a partir de sus acuses de lectura. | — |
| PollVotingService | Garantizar el voto único por residente y encuesta. | Un residente no puede votar dos veces la misma encuesta. |

#### 4.2.6.2. Interface Layer

**AnnouncementController**: publicación de comunicados oficiales y consulta del histórico (US13, US14). **ReadReceiptController**: seguimiento de visualización (US15). **PollController**: creación, votación y cierre de encuestas (US36). **DocumentController**: consulta de leyes y manuales del edificio (US32).

#### 4.2.6.3. Application Layer

## Communication Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Publicar comunicado | AnnouncementCommandService.handle(PublishAnnouncementCommand) | Guarda el comunicado y emite `AnnouncementPublished`, que dispara la Saga coreografiada de notificación. |
| Votar encuesta | PollCommandService.handle(VotePollCommand) | Valida el voto único por encuesta, **HTTP 409** si se duplica. |
| Publicar documento | DocumentCommandService.handle(PublishDocumentCommand) | Publica una normativa o manual del edificio. |

`CommunicationQueryService` resuelve el muro de anuncios y los resultados de encuesta. Valida además el límite de un mensaje diario por residente (**HTTP 429** si se excede). El contexto publica `AnnouncementPublished` y `PollClosed`.

#### 4.2.6.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| AnnouncementRepository | Persistencia de comunicados. |
| PollRepository | Persistencia de encuestas. |
| ReadReceiptRepository | Persistencia de acuses de lectura. |
| DocumentRepository | Persistencia de documentos normativos. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; **Adapter Pattern (Anti-Corruption Layer)** hacia **Cloudinary** para el almacenamiento y la entrega de las imágenes adjuntas a los comunicados; publicador AMQP de los eventos del contexto.

#### 4.2.6.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Communication](assets/img/ComponentView_Communication_Service.png)

*Figura. Diagrama de Componentes — Communication Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.6.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.6.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Communication](assets/img/communications_class.png)

*Figura. Diagrama de Clases — Communication. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.6.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Communication). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.7. Bounded Context: Forum

#### 4.2.7.1. Domain Layer

El agregado principal identificado es:

**Post**: publicación del muro comunitario con autor, contenido, fecha y estado. El estado `HIDDEN` es aplicado por la moderación de US37.

## Aggregate: PostAggregate

### Entity: Post

| Atributo | Tipo | Descripción |
|---|---|---|
| idPost | Long | Identificador único de la publicación. |
| idAuthor | Long | Residente autor de la publicación. |
| content | PostContent | Contenido de la publicación. |
| createdAt | DateTime | Fecha de creación. |
| status | PostStatus | Estado de visibilidad. |

### Entity: Comment

| Atributo | Tipo | Descripción |
|---|---|---|
| idComment | Long | Identificador único del comentario. |
| idPost | PostId | Publicación a la que responde. |
| idAuthor | Long | Residente autor del comentario. |
| content | String | Contenido del comentario. |

### Entity: ModerationAction

| Atributo | Tipo | Descripción |
|---|---|---|
| idAction | Long | Identificador único de la acción. |
| idPost | PostId | Publicación moderada. |
| idAdmin | Long | Administrador que ejecutó la acción. |
| reason | String | Motivo del ocultamiento. |
| actionAt | DateTime | Momento de la acción. Registro auditable de qué administrador ocultó qué publicación y por qué motivo. |

## ValueObject: PostContent

| Atributo | Tipo | Descripción |
|---|---|---|
| text | String | Texto de la publicación. |

## ValueObject: DailyPostQuota

| Atributo | Tipo | Descripción |
|---|---|---|
| maxPerDay | Int | Límite diario de publicaciones por residente. |

## Enumeration

| Enumeración | Valores |
|---|---|
| PostStatus | `VISIBLE`, `HIDDEN` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| PostQuotaService | Hacer cumplir el límite diario de publicaciones por residente. | — |
| ModerationService | Aplicar y revertir el ocultamiento de contenido inapropiado. | — |

#### 4.2.7.2. Interface Layer

**PostController**: publicación y consulta de mensajes del muro del edificio (US29). **CommentController**: respuestas a una publicación. **ModerationController**: revisión y ocultamiento de mensajes inapropiados por el administrador (US37).

#### 4.2.7.3. Application Layer

## Forum Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Publicar mensaje | PostCommandService.handle(CreatePostCommand) | Valida el límite diario de publicaciones vía `PostQuotaService`, **HTTP 429** si se excede. |
| Comentar publicación | CommentCommandService.handle(CreateCommentCommand) | Registra la respuesta a una publicación. |
| Moderar publicación | ModerationCommandService.handle(HidePostCommand) | Oculta una publicación inapropiada y registra la `ModerationAction`. |

`ForumQueryService` resuelve el muro del edificio filtrando las publicaciones ocultas.

#### 4.2.7.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| PostRepository | Persistencia de publicaciones. |
| CommentRepository | Persistencia de comentarios. |
| ModerationActionRepository | Persistencia de acciones de moderación. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; **Adapter Pattern (Anti-Corruption Layer)** hacia **Cloudinary** para las imágenes adjuntas a las publicaciones del foro.

#### 4.2.7.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Forum](assets/img/ComponentView_ForumNotifications.png)

*Figura. Diagrama de Componentes — Forum Service. Elaborado utilizando Structurizr (Structurizr, s.f.). La figura presenta en un mismo lienzo los componentes de Forum y de Notification.*

#### 4.2.7.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.7.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Forum](assets/img/forum_class.png)

*Figura. Diagrama de Clases — Forum. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.7.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Forum). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.8. Bounded Context: Report

#### 4.2.8.1. Domain Layer

Al ser un contexto mayormente de solo lectura (CQRS), **no posee agregados transaccionales propios**: su modelo son proyecciones construidas sobre datos de los que Payment e IoT Telemetry & Analytics siguen siendo dueños.

## Read Models

| Read Model | Descripción |
|---|---|
| FinancialReport | Consolidado de ingresos, egresos y deudas por periodo. |
| DelinquencyReport | Morosidad por unidad. |
| EnergyConsumptionReport | Consumo energético del edificio, alimentado por IoT Telemetry & Analytics. |

## ValueObject: ReportPeriod

| Atributo | Tipo | Descripción |
|---|---|---|
| from | Date | Inicio del periodo del reporte. |
| to | Date | Fin del periodo del reporte. |

## Enumeration

| Enumeración | Valores |
|---|---|
| ExportFormat | `PDF`, `EXCEL` |

## Domain Services

| Nombre | Responsabilidad |
|---|---|
| ReportConsolidationService | Unificar en una sola vista los datos que llegan de Payment e IoT Telemetry & Analytics. |

#### 4.2.8.2. Interface Layer

**ReportController**: generación de reportes financieros y de morosidad (US25). **ReportExportController**: exportación del reporte en el formato solicitado para compartirlo con la comunidad (US26).

#### 4.2.8.3. Application Layer

`ReportQueryService` consulta a Payment vía REST y consolida el reporte (Dashboard financiero). `ReportExportCommandService` gestiona la exportación. **Factory Pattern** (`ReportExporterFactory`) para generar el archivo de salida en el formato solicitado (PDF o Excel) sin acoplar la lógica de creación a la de exportación.

#### 4.2.8.4. Infrastructure Layer

`PaymentQueryClient` y `TelemetryQueryClient`, clientes REST síncronos hacia Payment Service e IoT Telemetry & Analytics Service; generador de archivos PDF/Excel. Este contexto no persiste datos de negocio propios: su "persistencia" es la de los contextos que consulta.

#### 4.2.8.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Report](assets/img/ComponentView_Report_Service.png)

*Figura. Diagrama de Componentes — Report Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.8.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.8.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Report](assets/img/reports_class.png)

*Figura. Diagrama de Clases — Report. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.8.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado.*

---

### 4.2.9. Bounded Context: IoT Access Management

#### 4.2.9.1. Domain Layer

El agregado principal identificado es:

**AccessCredential**: credencial de acceso de un residente, con tipo RFID , identificador, titular, vigencia y estado. La regla de negocio central del contexto se resuelve mediante el Domain Service **AccessDecisionService**.

## Aggregate: AccessCredentialAggregate

### Entity: AccessCredential

| Atributo | Tipo | Descripción |
|---|---|---|
| idCredential | Long | Identificador único de la credencial. |
| idResident | Long | Titular de la credencial. |
| type | CredentialType | Tipo de credencial (RFID). |
| identifier | RfidUid | Identificador físico o token de la credencial. |
| validFrom | DateTime | Inicio de vigencia. |
| validUntil | DateTime | Fin de vigencia. |
| status | CredentialStatus | Estado de la credencial. |

### Entity: AccessPermission

| Atributo | Tipo | Descripción |
|---|---|---|
| idPermission | Long | Identificador único del permiso. |
| idResident | Long | Residente habilitado. |
| idCommonArea | Long | Área común habilitada. |
| window | TimeWindow | Ventana horaria vigente del permiso. |

Habilitación de un residente sobre un área común, derivada de una reserva aprobada y acotada a su ventana horaria.

### Entity: AccessAttempt

| Atributo | Tipo | Descripción |
|---|---|---|
| idAttempt | Long | Identificador único del intento. |
| deviceId | String | Dispositivo en el que se registró el intento. |
| credentialPresented | String | Credencial presentada. |
| result | AccessResult | Resultado del intento. |
| occurredAt | DateTime | Marca de tiempo del intento. |

Bitácora auditable del contexto.

## ValueObject: RfidUid

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Identificador único de la tarjeta RFID. |


## Enumeration

| Enumeración | Valores |
|---|---|
| CredentialStatus | `ACTIVE`, `SUSPENDED`, `REVOKED` |
| AccessResult | `GRANTED`, `DENIED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| AccessDecisionService | Resolver si una credencial concede acceso. | Una credencial concede acceso solo si está activa, el residente no está moroso y existe un permiso vigente para esa área en ese instante. |

#### 4.2.9.2. Interface Layer

**AccessCredentialController**: emisión, suspensión y revocación de credenciales RFID. **AccessController**: dar acceso a tarjetas. **DoorControlController**: apertura remota por parte del administrador. **AccessAuditController**: consulta de la bitácora de accesos. Como *Consumers*: `ReservationEventConsumer` y `PaymentEventConsumer`, suscritos a los eventos que llegan por el broker.

#### 4.2.9.3. Application Layer

## Access Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Emitir/suspender/revocar credencial | AccessCredentialCommandService.handle(...) | Gestiona el ciclo de vida de la credencial RFID. |


`AccessQueryService` resuelve las consultas de credenciales, permisos y bitácora.

## Event Handlers

| Handler | Evento de origen | Descripción |
|---|---|---|
| ReservationApprovedEventHandler | ReservationApproved | Crea el `AccessPermission` temporal para el área reservada. |
| ResidentMarkedDelinquentEventHandler | ResidentMarkedDelinquent | Suspende las credenciales del residente moroso. |

Tras cada resolución de acceso el contexto publica `PhysicalAccessGranted` o `PhysicalAccessDenied`.

#### 4.2.9.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| AccessCredentialRepository | Persistencia de credenciales. |
| AccessPermissionRepository | Persistencia de permisos de acceso. |
| AccessAttemptRepository | Persistencia de la bitácora de intentos. |

Implementación JPA de los repositorios sobre PostgreSQL; `EdgeGatewaySyncClient`, cliente REST que empuja al Edge API las credenciales activas, las reservas vigentes y la blacklist para que el condominio siga operando sin conexión; publicador AMQP/MQTT de los eventos del contexto.

#### 4.2.9.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes IoT Access Management](assets/img/ComponentView_Access_Service.png)

*Figura. Diagrama de Componentes — IoT Access Management Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.9.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.9.6.1. Bounded Context Domain Layer Class Diagrams

![Clases IoT Access Management](assets/img/access-management-class.png)

*Figura. Diagrama de Clases — IoT Access Management. Elaborado con PlantUML.*

##### 4.2.9.6.2. Bounded Context Database Design Diagram

![ERD extensión IoT](assets/img/iot-erd-extension.png)

*Figura. Diagrama Entidad-Relación — extensión IoT. Elaborado con PlantUML.*

---

### 4.2.10. Bounded Context: Smart Lighting & Automation

#### 4.2.10.1. Domain Layer

El agregado principal identificado es:

**AutomationRule**: regla que gobierna una o varias luminarias de un área común, con condición de presencia, umbral de lux, franja horaria, duración de apagado por inactividad y prioridad frente a otras reglas. La regla se resuelve mediante el Domain Service **AutomationDecisionService**, que combina presencia, lux ambiental, horario de reserva y override vigente, aplicando la precedencia entre reglas.

## Aggregate: AutomationRuleAggregate

### Entity: AutomationRule

| Atributo | Tipo | Descripción |
|---|---|---|
| idRule | Long | Identificador único de la regla. |
| idCommonArea | Long | Área común a la que aplica. |
| presenceRequired | Boolean | Condición de presencia. |
| luxThreshold | LuxThreshold | Umbral de lux para activar la regla. |
| schedule | LightingSchedule | Franja horaria de la regla. |
| inactivityTimeout | PresenceTimeout | Duración de apagado por inactividad. |
| priority | Int | Prioridad frente a otras reglas. |

### Entity: Luminaire

| Atributo | Tipo | Descripción |
|---|---|---|
| idLuminaire | Long | Identificador único de la luminaria. |
| location | String | Ubicación física de la luminaria. |
| idCommonArea | Long | Área común asociada. |
| nominalPower | Decimal | Potencia nominal. |
| state | LuminaireState | Estado ON/OFF. |

### Entity: OverrideCommand

| Atributo | Tipo | Descripción |
|---|---|---|
| idOverride | Long | Identificador único del comando. |
| idLuminaire | Long | Luminaria afectada. |
| requestedBy | Long | Usuario que solicita el override. |
| action | OverrideAction | Encendido o apagado manual solicitado. |
| duration | Duration | Duración del override. |
| reason | String | Motivo del override, que suspende temporalmente la automatización. |

## ValueObject: LuxThreshold

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Umbral de lux ambiental. |

## ValueObject: PresenceTimeout

| Atributo | Tipo | Descripción |
|---|---|---|
| seconds | Int | Tiempo de inactividad antes de apagar. |

## ValueObject: LightingSchedule

| Atributo | Tipo | Descripción |
|---|---|---|
| start | Time | Inicio de la franja horaria. |
| end | Time | Fin de la franja horaria. |

## ValueObject: BrightnessLevel

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Nivel de brillo objetivo. |

## Enumeration

| Enumeración | Valores |
|---|---|
| LuminaireState | `ON`, `OFF` |
| OverrideAction | `ON`, `OFF` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| AutomationDecisionService | Resolver el estado objetivo de cada luminaria. | Combina presencia, lux ambiental, horario de reserva y override vigente, aplicando la precedencia entre reglas. |

#### 4.2.10.2. Interface Layer

**AutomationRuleController**: CRUD de reglas de automatización por parte del administrador. **LightingOverrideController**: encendido/apagado manual desde la aplicación del residente o del administrador. **LuminaireController**: registro y consulta de luminarias y su estado. Como *Consumer*: `PresenceEventConsumer`, suscrito a los eventos de presencia y de inicio de reserva.

#### 4.2.10.3. Application Layer

## Event Handlers

| Handler | Evento de origen | Descripción |
|---|---|---|
| AreaPresenceDetectedEventHandler | AreaPresenceDetected | Enciende según la regla vigente cuando se detecta presencia y el lux ambiental está por debajo del umbral. |
| ReservationStartedEventHandler | ReservationStarted | Enciende de forma programada el área al iniciar la reserva. |

`AutomationRuleCommandService`, `OverrideCommandService` (aplica el override y programa su expiración) y `LightingQueryService` completan la capa. El contexto publica `LuminaireTurnedOn`, `LuminaireTurnedOff` y `OverrideTriggered`.

Los dos eventos consumidos por este contexto se cerraron de la siguiente forma:

- **`AreaPresenceDetected`** lo publica el **Edge API**, no Telemetry: el Edge reenvía la lectura cruda del sensor PIR del nodo de iluminación como evento tan pronto la recibe por MQTT local, priorizando la latencia de encendido sobre la interpretación de dominio (que sí aplica Telemetry para sus propios fines analíticos, pero por una ruta de datos separada).
- **`ReservationStarted`** lo publica **Reservation**, mediante un scheduler interno que revisa periódicamente las reservas cuya ventana horaria acaba de comenzar — se mantiene toda la lógica de reservas en un único contexto en vez de que Smart Lighting consulte el calendario de Reservation por su cuenta.

#### 4.2.10.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| AutomationRuleRepository | Persistencia de reglas de automatización. |
| LuminaireRepository | Persistencia de luminarias. |
| OverrideCommandRepository | Persistencia de comandos de override. |

Implementación JPA de los repositorios sobre PostgreSQL; `EdgeCommandPublisher`, que envía por MQTT/REST al Edge API las reglas de programación y los comandos de override para que este los ejecute localmente sobre los nodos de iluminación; publicador AMQP/MQTT de los eventos del contexto.

#### 4.2.10.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Smart Lighting & Automation](assets/img/ComponentView_Lighting_Service.png)

*Figura. Diagrama de Componentes — Smart Lighting & Automation Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.10.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.10.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Smart Lighting & Automation](assets/img/lighting-automation-class.png)

*Figura. Diagrama de Clases — Smart Lighting & Automation. Elaborado con PlantUML.*

##### 4.2.10.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/db_diagram_lights.png)

*Figura. Diagrama Entidad-Relación — extensión Smart Lighting & Automation. Elaborado con PlantUML.*

---

### 4.2.11. Bounded Context: IoT Telemetry & Analytics

#### 4.2.11.1. Domain Layer

El agregado principal identificado es:

**EnergyConsumption**: consumo acumulado de una luminaria o área común en un periodo, calculado por integración de la potencia instantánea en el tiempo, `kWh = Σ(V × I × Δt) / 1000`.

## Aggregate: EnergyConsumptionAggregate

### Entity: EnergyConsumption

| Atributo | Tipo | Descripción |
|---|---|---|
| idConsumption | Long | Identificador único del registro. |
| idLuminaire | Long | Luminaria o área común medida. |
| bucket | TimeBucket | Periodo de agregación. |
| kwh | Decimal | Consumo acumulado en kWh. |

### Entity: ConsumptionBaseline

| Atributo | Tipo | Descripción |
|---|---|---|
| idBaseline | Long | Identificador único de la línea base. |
| idCommonArea | Long | Área a la que corresponde la línea base. |
| movingMean | Decimal | Media móvil de consumo. |
| movingStdDev | Decimal | Desviación estándar móvil. |

Línea base estadística por área contra la que se contrasta el consumo observado.

### Entity: AnomalyFlag

| Atributo | Tipo | Descripción |
|---|---|---|
| idFlag | Long | Identificador único de la marca. |
| type | String | Tipo de anomalía. |
| severity | String | Severidad de la anomalía. |
| evidence | String | Evidencia de la anomalía. |
| detectedAt | DateTime | Momento de la detección. |

## ValueObject: SensorReading
Value Object inmutable.

| Atributo | Tipo | Descripción |
|---|---|---|
| deviceId | String | Dispositivo de origen. |
| magnitudeType | String | Tipo de magnitud (presencia, lux o corriente). |
| value | Decimal | Valor de la lectura. |
| unit | MeasurementUnit | Unidad de medida. |
| capturedAt | DateTime | Marca de tiempo de la lectura. |

## ValueObject: MeasurementUnit

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Unidad de medida de la lectura. |

## ValueObject: TimeBucket

| Atributo | Tipo | Descripción |
|---|---|---|
| start | DateTime | Inicio del bucket temporal. |
| end | DateTime | Fin del bucket temporal. |

## ValueObject: ZScore

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Puntuación Z usada para contrastar contra la baseline. |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| EnergyCalculationService | Integración temporal de la potencia. | `kWh = Σ(V × I × Δt) / 1000`. |
| DeviceHealthService | Evaluar el *heartbeat* de cada dispositivo. | Marca el dispositivo `OFFLINE` cuando deja de emitir durante el tiempo límite configurado (TS16, TS17). |
| AnomalyDetectionService | Comparar la muestra contra la baseline. | Distingue consumo anómalo de falla de luminaria, esta última caracterizada por corriente nula con la luminaria comandada en ON. |

#### 4.2.11.2. Interface Layer

**TelemetryQueryController**: series temporales y agregados que alimentan los dashboards de la Web Application. **EnergyReportController**: consumo por área y por periodo. **AnomalyController**: consulta de anomalías detectadas. Como *Consumer*: `TelemetryIngestionConsumer`, suscrito por MQTT a las lecturas crudas que el Edge API reenvía al broker.

#### 4.2.11.3. Application Layer

`TelemetryIngestionService` (valida, normaliza y persiste la lectura entrante), `EnergyCalculationCommandService` (recalcula el consumo del bucket temporal afectado), `BaselineRecalculationService` (actualiza media y desviación móviles), `AnomalyDetectionHandler` (evalúa cada nueva agregación contra la baseline), `DeviceHealthMonitor` (job periódico que detecta la ausencia de mensajes de un dispositivo, lo marca `OFFLINE`, descarta los comandos pendientes hacia él y notifica al administrador sin afectar la comunicación con el resto) y `TelemetryQueryService` (resuelve las consultas de los dashboards). El contexto publica `AbnormalConsumptionDetected`, `LuminaireFailureDetected` y `DeviceWentOffline`.

#### 4.2.11.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| TelemetryRepository | Persistencia de lecturas crudas (`sensor_readings`, hypertable). |
| EnergyConsumptionRepository | Persistencia del consumo agregado. |
| BaselineRepository | Persistencia de las líneas base de consumo. |

Implementación del repositorio de series sobre **TimescaleDB** —hypertables particionadas por tiempo y agregados continuos para resolver las consultas del dashboard sin recorrer la serie cruda—, a diferencia del resto de contextos, que persisten en PostgreSQL relacional. Suscriptor MQTT hacia el broker y publicador AMQP/MQTT de los eventos de alerta.

#### 4.2.11.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes IoT Telemetry & Analytics](assets/img/ComponentView_Telemetry_Service.png)

*Figura. Diagrama de Componentes — IoT Telemetry & Analytics Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.11.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.11.6.1. Bounded Context Domain Layer Class Diagrams

![Clases IoT Telemetry & Analytics](assets/img/telemetry-analytics-class.png)

*Figura. Diagrama de Clases — IoT Telemetry & Analytics. Elaborado con PlantUML.*

##### 4.2.11.6.2. Bounded Context Database Design Diagram

Por su naturaleza de series temporales, las tablas de este contexto (`sensor_readings` como hypertable, más `energy_consumption`, `consumption_baselines` y `anomaly_flags`) no forman parte del ERD relacional consolidado (LucidChart, solo PostgreSQL). Se documentan en el mismo ERD complementario de IoT Access Management, separadas en su propio paquete TimescaleDB:

![ERD extensión IoT](assets/img/iot-erd-extension.png)

*Figura. Diagrama Entidad-Relación — extensión IoT, paquete TimescaleDB (`sensor_readings`, `energy_consumption`, `consumption_baselines`, `anomaly_flags`). Elaborado con PlantUML.*

### 4.2.12. Bounded Context: Water Pump Leak Detection

#### 4.2.12.1. Domain Layer

El agregado principal identificado es:

**LeakDetectionRule** (Aggregate Root: regla que gobierna una o varias bombas de agua, con umbral de caudal, umbral de presión, franja horaria de consumo esperado y duración mínima de desviación antes de declarar una fuga), **WaterPump** (Entity: bomba física con ubicación, zona asociada, potencia nominal y estado `ON`/`OFF`/`FAULT`), **LeakAlert** (Entity: evento de fuga detectado, con severidad, evidencia y estado de resolución). Value Objects: `FlowThreshold`, `PressureThreshold`, `FlowRate`, `LeakSeverity`. Domain Service: **LeakDetectionService**, que compara la lectura de caudal y presión contra la línea base esperada de la zona y distingue una fuga real de un consumo legítimo fuera de horario. Interfaces `LeakDetectionRuleRepository`, `WaterPumpRepository` y `LeakAlertRepository`.

## Aggregate: LeakDetectionRuleAggregate

### Entity: LeakDetectionRule

| Atributo | Tipo | Descripción |
|---|---|---|
| idRule | Long | Identificador único de la regla. |
| idZone | Long | Zona hidráulica a la que aplica. |
| flowThreshold | FlowThreshold | Caudal máximo esperado fuera de horario de consumo. |
| pressureThreshold | PressureThreshold | Caída de presión mínima que dispara la evaluación. |
| expectedWindow | LightingSchedule | Franja horaria de consumo esperado. |
| minDeviationMinutes | Int | Duración mínima de desviación antes de declarar fuga. |
| isActive | Boolean | Indica si la regla está vigente. |

## Aggregate: WaterPumpAggregate

### Entity: WaterPump

| Atributo | Tipo | Descripción |
|---|---|---|
| idPump | Long | Identificador único de la bomba. |
| idZone | Long | Zona hidráulica asociada. |
| location | String | Ubicación física de la bomba. |
| nominalFlow | Decimal | Caudal nominal de la bomba. |
| state | PumpState | Estado actual de la bomba. |

### Entity: LeakAlert

| Atributo | Tipo | Descripción |
|---|---|---|
| idAlert | Long | Identificador único de la alerta. |
| idPump | PumpId | Bomba en la que se detectó la desviación. |
| severity | LeakSeverity | Severidad de la fuga detectada. |
| evidence | String | Lectura de caudal/presión que sustenta la alerta. |
| detectedAt | DateTime | Momento de la detección. |
| resolvedAt | DateTime | Momento de resolución (si aplica). |
| status | LeakAlertStatus | Estado de la alerta. |

## ValueObject: FlowThreshold

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Caudal límite antes de considerar una posible fuga. |

## ValueObject: PressureThreshold

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Caída de presión mínima que activa la evaluación. |

## ValueObject: FlowRate

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Caudal instantáneo medido. |
| unit | String | Unidad de medida del caudal. |

## Enumeration

| Enumeración | Valores |
|---|---|
| PumpState | `ON`, `OFF`, `FAULT` |
| LeakSeverity | `LOW`, `MEDIUM`, `HIGH` |
| LeakAlertStatus | `OPEN`, `ACKNOWLEDGED`, `RESOLVED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| LeakDetectionService | Distinguir una fuga real de un consumo legítimo. | Un caudal por encima del umbral fuera de la franja horaria esperada, sostenido más allá de la duración mínima configurada, se declara fuga. Una caída de presión sin caudal correspondiente marca la bomba como `FAULT`. |

#### 4.2.12.2. Interface Layer

**LeakDetectionRuleController**: CRUD de reglas de detección por parte del administrador. **WaterPumpController**: registro y consulta de bombas y su estado. **LeakAlertController**: consulta y resolución de alertas de fuga. **PumpControlController**: apagado remoto manual de una bomba. Como *Consumer*: `FlowReadingEventConsumer`, suscrito a las lecturas de caudal y presión que reenvía el Edge API.

#### 4.2.12.3. Application Layer

## Event Handlers

| Handler | Evento de origen | Descripción |
|---|---|---|
| FlowReadingReceivedEventHandler | FlowReadingReceived | Evalúa la lectura contra `LeakDetectionService`; si corresponde, crea la `LeakAlert` y ordena el corte de la bomba. |

`LeakDetectionRuleCommandService`, `PumpControlCommandService` (ejecuta el comando de apagado y programa su confirmación) y `LeakQueryService` completan la capa. El contexto publica `LeakDetected`, `PumpShutOff` y `LeakResolved`.

**`FlowReadingReceived`** lo publica el **Edge API**, no Telemetry: reenvía la lectura cruda del sensor de caudal/presión del nodo hidráulico como evento tan pronto la recibe por MQTT local, priorizando la latencia de corte sobre la interpretación de dominio, siguiendo el mismo criterio aplicado en `AreaPresenceDetected` (ver 4.2.10.3).

#### 4.2.12.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| LeakDetectionRuleRepository | Persistencia de reglas de detección. |
| WaterPumpRepository | Persistencia de bombas. |
| LeakAlertRepository | Persistencia de alertas de fuga. |

Implementación JPA de los repositorios sobre PostgreSQL; `EdgeCommandPublisher`, que envía por MQTT/REST al Edge API el comando de corte de la bomba para que este lo ejecute localmente sobre el nodo hidráulico; publicador AMQP/MQTT de los eventos del contexto.

#### 4.2.12.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Water Pump Leak Detection](assets/img/component_leak.png)

*Figura. Diagrama de Componentes — Water Pump Leak Detection Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.12.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.12.6.1. Bounded Context Domain Layer Class Diagrams


![Clases Water Pump Leak Detection](assets/img/class_diagram_leak.png)

*Figura. Diagrama de Clases — Water Pump Leak Detection. Elaborado con PlantUML.*

##### 4.2.12.6.2. Bounded Context Database Design Diagram


![ERD extensión Water Pump Leak Detection](assets/img/db_diagram_leak.png)

*Figura. Diagrama Entidad-Relación — extensión Water Pump Leak Detection. Elaborado con PlantUML.*


# Capítulo V: Solution UI/UX Design

## 5.1. Style Guidelines

### 5.1.1. General Style Guidelines

### 5.1.2. Web, Mobile and IoT Style Guidelines

## 5.2. Information Architecture

### 5.2.1. Organization Systems

### 5.2.2. Labeling Systems

### 5.2.3. SEO Tags and Meta Tags

### 5.2.4. Searching Systems

### 5.2.5. Navigation Systems

## 5.3. Landing Page UI Design

### 5.3.1. Landing Page Wireframe

### 5.3.2. Landing Page Mock-up

## 5.4. Applications UX/UI Design

### 5.4.1. Applications Wireframes

### 5.4.2. Applications Wireflow Diagrams

#### 5.4.2.1. Applications Mock-ups

### 5.4.3. Applications User Flow Diagrams

## 5.5. Applications Prototyping

## 5.6. IoT Device Design

# Capítulo VI: Product Implementation, Validation & Deployment

## 6.1. Software Configuration Management

### 6.1.1. Software Development Environment Configuration

Esta subsección registra las herramientas utilizadas para desarrollar el **Edge Gateway** (servicio Edge del proyecto). Las herramientas de los demás productos digitales (Landing Page, Web Services, Web Applications y Mobile Applications) se agregan en este mismo cuadro conforme se incorporan.

| Producto de software | Versión | Propósito en el proyecto | Referencia |
|---|---|---|---|
| Python | 3.12 (imagen Docker) | Lenguaje del Edge Gateway, según el enunciado para Edge Services | https://www.python.org/downloads/ |
| Flask | 3.1.3 | Framework web del Edge Gateway (API REST local) | https://flask.palletsprojects.com/ |
| flask-smorest | 0.47.0 | Definición de endpoints y documentación OpenAPI/Swagger | https://flask-smorest.readthedocs.io/ |
| marshmallow | 4.3.1 | Validación de solicitudes REST y de mensajes MQTT | https://marshmallow.readthedocs.io/ |
| Peewee ORM | 4.5.2 | Acceso a datos del Edge Gateway, según el enunciado | https://docs.peewee-orm.com/ |
| SQLite | incluido en Python | Base de datos local del Edge Gateway (modo WAL) | https://www.sqlite.org/ |
| paho-mqtt | 2.1.0 | Cliente MQTT para comunicarse con los nodos ESP32 | https://eclipse.dev/paho/ |
| Eclipse Mosquitto | 2 | Broker MQTT local entre los nodos ESP32 y el Edge Gateway | https://mosquitto.org/ |
| gunicorn | 26.2.0 | Servidor de aplicación del contenedor del Edge Gateway | https://gunicorn.org/ |
| pytest | 9.1.1 | Pruebas unitarias y de integración del Edge Gateway | https://docs.pytest.org/ |
| Docker y Docker Compose | 29.8 / 5.5 | Empaquetado y despliegue local de todo el servicio | https://www.docker.com/products/docker-desktop/ |
| GitHub | — | Control de versiones y repositorio del Edge Gateway | https://github.com/ |

### 6.1.2. Source Code Management

El código fuente se gestiona en GitHub, dentro de la organización pública del equipo. Cada producto digital tiene su propio repositorio, que incluye el proyecto y sus archivos de pruebas.

| Producto | Repositorio |
|---|---|
| Edge Gateway (Python, Flask, Peewee, SQLite) | https://github.com/IoT-UPC-202620/Edifika-Microservice-IoT-Gateway |

**GitFlow.** El Edge Gateway aplica GitFlow con las siguientes ramas:

| Rama | Origen | Destino | Convención de nombre | Ejemplo |
|---|---|---|---|---|
| `main` | — | — | Contiene solo versiones publicadas, cada una con su tag | `v0.1.0` |
| `develop` | `main` | — | Rama de integración | `develop` |
| Feature | `develop` | `develop` (merge `--no-ff`) | `feature/<ID de historia>-<nombre corto>` | `feature/US71-access-control` |
| Release | `develop` | `main` y `develop` | `release/<versión>` | `release/0.1.0` |
| Hotfix | `main` | `main` y `develop` | `hotfix/<nombre>` | `hotfix/lock-timeout` |

Cada historia o grupo de historias relacionadas se desarrolla en su propia rama feature y se integra a `develop` mediante un merge sin avance rápido (`--no-ff`), de modo que el historial conserve qué cambios pertenecen a cada historia.

**Semantic Versioning.** Las versiones siguen el formato `MAJOR.MINOR.PATCH`. La primera versión funcional es la **0.1.0**: se preparó en `release/0.1.0` (con su `CHANGELOG.md`), se integró a `main` y se etiquetó como `v0.1.0`.

**Conventional Commits.** Los mensajes de commit usan el formato `<tipo>(<ámbito>): <descripción>`, con los tipos `feat`, `fix`, `docs`, `test`, `chore` y `refactor`, y mencionan entre paréntesis los identificadores de las historias implementadas. Por ejemplo: `feat(access): resolve RFID access locally with lock, buzzer and OLED feedback (US71-US75, US87)`.

### 6.1.3. Source Code Style Guide & Coding Conventions

Convenciones adoptadas para el código Python del Edge Gateway:

| Aspecto | Convención |
|---|---|
| Estilo general | PEP 8 (https://peps.python.org/pep-0008/) |
| Documentación | Docstrings según PEP 257 (https://peps.python.org/pep-0257/) en módulos y clases públicas |
| Nomenclatura | En inglés. `snake_case` para funciones, variables y módulos; `PascalCase` para clases; `MAYUSCULAS_CON_GUION_BAJO` para constantes |
| Tipado | Anotaciones de tipo en las firmas públicas de los servicios |
| Organización | Capas separadas: `api` (interfaz REST), `services` (reglas de negocio), `mqtt` (contrato y mensajería), `models` y `db` (persistencia) |
| Mensajes al usuario | Inglés como idioma por defecto (mensajes de la API, de la pantalla OLED y de la documentación Swagger), según el enunciado |
| Configuración | Solo mediante variables de entorno con el prefijo `EDGE_`; ningún secreto en el código |
| Pruebas | Un archivo por componente; el nombre de cada prueba describe el comportamiento esperado, y los escenarios Dado/Cuando/Entonces de las historias se traducen en pruebas `pytest` |
| Commits y ramas | Conventional Commits y GitFlow (ver 6.1.2) |

### 6.1.4. Software Deployment Configuration

El Edge Gateway se despliega con **Docker Compose**, junto con el broker MQTT y un backend simulado. La solución completa se levanta con un solo comando:

```bash
docker compose up --build                  # broker + Edge Gateway + backend simulado
docker compose --profile sim up --build    # además, dos nodos ESP32 virtuales
```

**Servicios del `docker-compose.yml`**

| Servicio | Imagen | Puerto | Función |
|---|---|---|---|
| `mosquitto` | `eclipse-mosquitto:2` | 1883 | Broker MQTT local. Verificación de salud con `mosquitto_sub` |
| `edge-gateway` | Construida desde el `Dockerfile` (`python:3.12-slim`) | 8000 | API REST, Swagger (`/docs`) y `/health` |
| `mock-cloud` | Misma imagen | 9000 | Backend simulado que recibe los eventos y entrega las credenciales |
| `seed`, `sim-door`, `sim-garden` | Misma imagen (perfil `sim`) | — | Registro de los nodos de demostración y dos ESP32 virtuales |

**Decisiones de despliegue**

- El Edge Gateway se ejecuta con **un solo worker** de gunicorn (y varios hilos), porque el cliente MQTT y los planificadores de tareas deben existir una única vez.
- La base de datos SQLite se guarda en el volumen `edge-data`, de modo que sobrevive a los reinicios del contenedor. El broker conserva su estado en el volumen `mosquitto-data`.
- El Edge Gateway espera a que el broker y el backend superen sus verificaciones de salud antes de iniciar (`depends_on` con `service_healthy`). Si el broker se cae después, el cliente reintenta la conexión con espera creciente.
- El contenedor se ejecuta con un usuario sin privilegios y define su propio `HEALTHCHECK` sobre `/health`.

**Variables de entorno principales**

| Variable | Valor por defecto en Compose | Descripción |
|---|---|---|
| `EDGE_SERVICE_TOKEN` | `dev-service-token` | Token Bearer de la API REST local (obligatorio) |
| `EDGE_MQTT_HOST` | `mosquitto` | Broker MQTT |
| `EDGE_CLOUD_BASE_URL` | `http://mock-cloud:9000` | Backend al que se envían los eventos |
| `EDGE_CLOUD_TOKEN` | `dev-cloud-token` | Credencial del Edge Gateway ante el backend |
| `EDGE_DATABASE_PATH` | `/data/edge-gateway.db` | Archivo SQLite |
| `EDGE_TIMEZONE` | `America/Lima` | Zona horaria de los horarios de las áreas |

Los valores se pueden sobrescribir con un archivo `.env` (ver `.env.example`). La topología desplegada se representa en el Deployment Diagram de la sección 4.1.3.4.

## 6.2. Landing Page, Services & Applications Implementation

### 6.2.1. Sprint 1

#### 6.2.1.1. Sprint Planning 1

#### 6.2.1.2. Aspect Leaders and Collaborators

#### 6.2.1.3. Sprint Backlog 1

#### 6.2.1.4. Development Evidence for Sprint Review

El Edge Gateway se desarrolló en ramas feature de GitFlow. Cada rama se integró a `develop` con su commit convencional, y el release `0.1.0` se integró a `main`. Repositorio: https://github.com/IoT-UPC-202620/Edifika-Microservice-IoT-Gateway

| Rama | Commit | Historias | Qué se desarrolló |
|---|---|---|---|
| `feature/TS23-flask-base` | `b846d26` | TS23 | Aplicación Flask, configuración por variables de entorno, `/health`, Swagger y token Bearer |
| `feature/TS25-local-persistence` | `d962edc` | TS25 | Modelos Peewee sobre SQLite (modo WAL) y cola de salida de eventos (outbox) |
| `feature/TS24-mqtt-contract` | `6daef9c` | TS24 | Contrato MQTT versionado, router de mensajes, puente paho-mqtt y comandos con confirmación (ACK) |
| `feature/US79-US80-device-registry` | `90a80df` | US79, US80, US85 | Registro de nodos, heartbeat, detección de nodos sin conexión y sincronización de reloj |
| `feature/US71-access-control` | `ab2d202` | US71–US75, US87 | Decisión local de acceso RFID, cerradura, buzzer y OLED, horarios por área y registro manual de tarjetas |
| `feature/US76-sensor-telemetry` | `6a80218` | US76–US78, US92 | Lecturas de humedad y ultrasonido, nivel de agua, alertas locales y calibración |
| `feature/TS33-cloud-integration` | `9ca706a` | TS33, US75, US81, US82, US93 | Envío por lotes al backend, sincronización de la caché y endpoints de estado local |
| `feature/US83-remote-commands-maintenance` | `da711b3` | US83, US89 | Comandos remotos y modo mantenimiento |
| `feature/TS31-docker-compose` | `fb0a2db` | TS31, TS32, TS33 | Docker Compose, simulador de nodos y backend simulado |
| `feature/docs-readme` | `4e7bd48` | — | Documentación del repositorio |
| `release/0.1.0` | `171a6f9` | — | Preparación de la versión 0.1.0 y `CHANGELOG.md` |

**Estructura del código**

```
main.py                    punto de entrada (gunicorn main:app)
edge_gateway/
  config.py  gateway.py    configuración · raíz de composición y tareas en segundo plano
  mqtt/                    contrato (esquemas), router y puente paho-mqtt
  services/                access, devices, telemetry, commands, remote, outbox, sync, alerts, credentials
  api/                     blueprints REST y esquemas
  models.py  db.py         modelos Peewee · configuración de SQLite
mock_cloud/                backend simulado para pruebas locales
simulator/                 nodos ESP32 virtuales
tests/                     suite de pruebas pytest
```

El código de la aplicación tiene cerca de 2 700 líneas y las pruebas cerca de 1 900.

**Decisiones de diseño relevantes**

- **Offline first:** las decisiones de acceso nunca consultan la nube; todo lo que debe llegar al backend pasa por la cola de salida en SQLite. Un registro y su evento se escriben en una misma transacción.
- **Alertas con estado:** cada condición (humedad baja, nivel crítico de agua, nodo sin conexión) se anuncia una vez al producirse y una vez al resolverse, no por cada lectura.
- **Mantenimiento significa desactivado:** un nodo en mantenimiento no procesa tarjetas, lecturas, comandos ni genera alertas hasta que el mantenimiento termina, de forma manual o por vencimiento.
- **Cola con prioridad:** si la cola de salida se llena, se descartan primero las lecturas de telemetría más antiguas; los accesos y las alertas nunca se descartan.

#### 6.2.1.5. Testing Suite Evidence for Sprint Review

Las pruebas se encuentran en la carpeta `tests/` del repositorio y se ejecutan con `pytest`. La suite tiene **188 pruebas** que **no necesitan broker MQTT ni internet**: el broker, el backend y el reloj se reemplazan con dobles de prueba (`FakePublisher`, `FakeCloud`, `FakeClock`), y cada prueba usa su propia base de datos SQLite temporal. La suite completa se ejecuta en unos 12 segundos.

```bash
pip install -r requirements-dev.txt
pytest
# 188 passed
```

| Archivo de pruebas | Pruebas | Qué verifica | Historias |
|---|---|---|---|
| `test_base.py` | 6 | Arranque, `/health`, Swagger/OpenAPI y configuración obligatoria | TS23 |
| `test_persistence.py` | 7 | Modo WAL, persistencia tras reinicio, escritura atómica y límite de la cola | TS25 |
| `test_mqtt_contract.py` | 21 | Esquemas, versión de contrato, router resistente a mensajes inválidos y puente MQTT | TS24 |
| `test_commands.py` | 9 | Comandos, ACK, tiempos de espera y alerta de cerradura sin respuesta | TS24, US72 |
| `test_devices.py` | 19 | Registro de nodos, heartbeat, desconexión, recuperación, sincronización de reloj, planificador y API | US79, US80, US85 |
| `test_access.py` | 29 | Decisiones de acceso (tarjeta válida, desconocida, bloqueada, vencida, sin reserva, fuera de horario), lecturas repetidas, intentos denegados y API | US71–US75, US87 |
| `test_telemetry.py` | 28 | Validación de lecturas, nivel de agua, filtro de picos, alertas con histéresis y calibración | US76–US78, US92 |
| `test_cloud_integration.py` | 38 | Entrega por lotes, reintentos, caída y recuperación de la nube, cliente HTTP, sincronización y estado local | TS33, US75, US81, US82, US93 |
| `test_remote_and_maintenance.py` | 26 | Comandos remotos, errores HTTP y modo mantenimiento | US83, US89 |
| `test_mock_cloud.py` | 5 | Backend simulado: autenticación, idempotencia y sincronización | TS33 |
| **Total** | **188** | | |

**Escenarios de aceptación.** Los escenarios Dado/Cuando/Entonces de cada historia (Capítulo III) se tradujeron en pruebas con nombres descriptivos. Por ejemplo, el escenario de US75 "Registro local sin internet" se verifica en `test_access_attempts_made_while_offline_reach_the_cloud_afterwards`, y el de US89 "Nodo desactivado durante el mantenimiento" en `test_node_in_maintenance_rejects_every_remote_command_even_from_an_admin`.

**Verificación de la suite.** Se comprobó que las pruebas detectan errores reales introduciendo fallos a propósito: invertir el orden de entrega de eventos, eliminar la espera entre reintentos y quitar la protección de las tarjetas registradas sin conexión. En los tres casos al menos una prueba falló y señaló el comportamiento alterado.

#### 6.2.1.6. Execution Evidence for Sprint Review

Se ejecutó el servicio completo de extremo a extremo: broker MQTT real, backend simulado, Edge Gateway y nodos ESP32 virtuales, que se comunican con el contrato MQTT descrito en 6.2.1.7. Para esta verificación el broker fue un broker MQTT de código abierto ejecutado en el mismo equipo.

**1. Arranque y salud.** El Edge Gateway se conectó al broker, sincronizó la caché con el backend y reportó todas sus dependencias en estado correcto:

```
INFO edge_gateway.mqtt.bridge: Connected to MQTT broker localhost:1883
INFO edge_gateway.services.sync: Cache synchronised to version 1: {'credentials': 1, 'permissions': 1, 'areaSchedules': 1, 'removed': 0}
GET /health -> {"status":"ok", "checks":{"database":{"ok":true}, "outbox":{...,"pending":0}, "cache":{"version":1,"stale":false}, "mqtt":{"ok":true}}}
```

**2. Registro de nodos y primer heartbeat.** Se registraron dos nodos mediante la API; a los pocos segundos de iniciar los nodos virtuales ambos pasaron de `INACTIVE` a `ACTIVE`:

```
esp32-door-01   ACTIVE
esp32-garden-01 ACTIVE
```

**3. Lectura de tarjetas en la puerta.** Una tarjeta con reserva vigente abre la puerta y una tarjeta desconocida es rechazada; en ambos casos el nodo recibe qué mostrar en la pantalla OLED y qué sonido emitir:

```
[esp32-door-01] -> card 04A1B2C3
[esp32-door-01] <- access_result {"result": "GRANTED", "reason": "ok", "message": "Access granted", "buzzer": "granted", "name": "Ana Perez", "lockMs": 5000}

[esp32-door-01] -> card DEADBEEF
[esp32-door-01] <- access_result {"result": "DENIED", "reason": "unknown_credential", "message": "Card not registered", "buzzer": "denied"}
```

**4. Operación sin internet.** Se simuló la caída del backend. Con el backend caído, la tarjeta válida igualmente abrió la puerta y los eventos quedaron en la cola local; al restablecerse el servicio llegaron todos, en orden y sin duplicados:

```
(backend caído)   [esp32-door-01] GRANTED: Access granted
                  status -> outbox: {'pending': 17, 'consecutiveFailures': 2, 'lastError': 'HTTP 503'}
(backend restaurado)
                  backend recibió los 3 accesos (GRANTED, DENIED, GRANTED) y 100 lecturas; pendientes en cola: 4 (lecturas nuevas)
```

**5. Comandos remotos y mantenimiento.** El Edge Gateway ejecuta comandos solo en nodos activos y espera su confirmación:

```
POST /devices/esp32-door-01/commands  {"type":"unlock","params":{"durationMs":3000}}  -> 200 {"status":"ACKED"}
PUT  /devices/esp32-door-01/maintenance {"enabled":true,"durationMinutes":30}          -> 200 status MAINTENANCE
POST /devices/esp32-door-01/commands  {"type":"unlock"}                                -> 409 "Device under maintenance"
tarjeta presentada en mantenimiento                                                    -> DENIED: Under maintenance
```

Además, el backend recibió el resultado de cada comando remoto con el administrador que lo solicitó (`requestedBy`).

**6. Seguridad básica.** Una solicitud sin token Bearer a la API responde `401`.

#### 6.2.1.7. Services Documentation Evidence for Sprint Review

El Edge Gateway documenta su API REST con **OpenAPI/Swagger**: la interfaz está disponible en `/docs` y la especificación en `/openapi.json`. Todos los endpoints, excepto `/health`, requieren el token Bearer configurado en `EDGE_SERVICE_TOKEN`. Los textos de la documentación y de las respuestas están en inglés, idioma por defecto del proyecto.

**Endpoints de la API REST local**

| Método | Ruta | Descripción | Historias |
|---|---|---|---|
| GET | `/health` | Estado del servicio y de sus dependencias (base de datos, broker, cola de eventos y caché) | TS23 |
| POST | `/api/v1/devices` | Registrar un nodo; queda `INACTIVE` hasta su primer heartbeat | US79 |
| GET | `/api/v1/devices` | Listar los nodos | US80, US93 |
| GET | `/api/v1/devices/{device_id}` | Consultar un nodo | US80 |
| PATCH | `/api/v1/devices/{device_id}/settings` | Calibrar altura del tanque y umbrales | US92 |
| PUT | `/api/v1/devices/{device_id}/maintenance` | Activar o finalizar el modo mantenimiento | US89 |
| POST | `/api/v1/devices/{device_id}/commands` | Ejecutar un comando (abrir cerradura, mostrar mensaje, sonar buzzer) y esperar su confirmación | US83 |
| POST | `/api/v1/credentials` | Registrar una tarjeta manualmente, también sin internet | US86 (registro manual) |
| GET | `/api/v1/credentials` | Listar las credenciales en caché | US93 |
| PATCH | `/api/v1/credentials/{uid}/status` | Activar, suspender o revocar una credencial | US91 (bloqueo manual) |
| GET | `/api/v1/access-attempts` | Bitácora de accesos, con la credencial enmascarada | US55, US93 |
| GET | `/api/v1/readings` | Lecturas de sensores | US65 |
| POST | `/api/v1/sync` | Recibir credenciales, reservas y horarios enviados por la nube | US81 |
| GET | `/api/v1/status` | Estado del Edge Gateway: nodos, cola de eventos y caché | US93 |
| GET | `/api/v1/outbox` | Eventos pendientes de enviar a la nube | US93 |

Los errores tienen una forma común: `{"code": 409, "status": "Conflict", "message": "..."}`. Los errores de validación (`422`) incluyen un objeto `errors` con el detalle de cada campo.

**Contrato MQTT entre los nodos y el Edge Gateway** (prefijo `edifika/v1`, versión de esquema 1). Todos los mensajes son JSON con la versión `v` y la marca de tiempo `ts` del reloj del nodo.

| Sentido | Tópico | Contenido |
|---|---|---|
| Nodo → Edge | `edifika/v1/nodes/{deviceId}/heartbeat` | `deviceId`, `ts`, `fw` (versión de firmware, opcional) |
| Nodo → Edge | `edifika/v1/nodes/{deviceId}/access` | `credentialType` (`RFID`), `credential` (UID de la tarjeta) |
| Nodo → Edge | `edifika/v1/nodes/{deviceId}/readings` | `sensor` (`humidity` o `ultrasonic`), `value` (puede ser nulo si el sensor no midió), `unit` |
| Nodo → Edge | `edifika/v1/nodes/{deviceId}/ack` | `commandId`, `status` (`OK` o `FAILED`), `detail` |
| Edge → Nodo | `edifika/v1/nodes/{deviceId}/commands` | `commandId`, `type`, `params` |

Tipos de comando que debe atender el firmware: `access_result` (resultado de una lectura de tarjeta: abrir `lockMs`, mensaje para la OLED y patrón del buzzer), `unlock`, `display`, `buzzer`, `alert` (alerta local, por ejemplo nivel crítico de agua), `maintenance` y `time_sync`. El nodo debe confirmar con un `ack` cada comando que incluya `commandId`. Un mensaje con una versión de esquema distinta o con un formato inválido se descarta y se reporta a la nube una sola vez por dispositivo.

**Contrato entre el Edge Gateway y el backend.** Las llamadas incluyen `Authorization: Bearer <token>` y el encabezado `X-Gateway-Id`.

| Operación | Descripción |
|---|---|
| `POST /api/v1/edge/events` | Entrega por lotes de eventos `{eventId, kind, occurredAt, payload}`. El backend responde con los `eventId` aceptados y **debe deduplicar por `eventId`**, porque la entrega es al menos una vez. Tipos de evento: `access_attempt`, `reading`, `alert`, `device_status`, `command_result` y `credential_changed` |
| `GET /api/v1/edge/sync?since={versión}` | Credenciales, ventanas de reserva y horarios de áreas. Entrega una copia completa (`full: true`) o solo los cambios desde la versión indicada |

Ante un error `5xx`, `401`, `403`, `408`, `429` o una falla de red, el Edge Gateway conserva los eventos y reintenta con espera creciente (máximo 60 segundos). Ante cualquier otro error `4xx`, descarta el evento tras 5 intentos para que no bloquee la cola.

#### 6.2.1.8. Software Deployment Evidence for Sprint Review

El despliegue del Edge Gateway se define de forma reproducible en el repositorio (https://github.com/IoT-UPC-202620/Edifika-Microservice-IoT-Gateway):

| Archivo | Contenido |
|---|---|
| `Dockerfile` | Imagen del Edge Gateway (`python:3.12-slim`, usuario sin privilegios, `HEALTHCHECK` y gunicorn con un worker) |
| `docker-compose.yml` | Servicios `mosquitto`, `edge-gateway`, `mock-cloud` y, con el perfil `sim`, `seed`, `sim-door` y `sim-garden`; volúmenes `edge-data` y `mosquitto-data` |
| `mosquitto/mosquitto.conf` | Configuración del broker MQTT local |
| `.env.example` | Variables de entorno que se pueden sobrescribir |

El archivo `docker-compose.yml` se validó con `docker compose config`, que confirma la sintaxis y la resolución de sus variables, y los seis servicios (`mosquitto`, `edge-gateway`, `mock-cloud`, `seed`, `sim-door` y `sim-garden`) quedan definidos. Los pasos de despliegue están en la sección 6.1.4.

> **Pendiente de evidencia:** capturas de la ejecución de `docker compose up --build` con los contenedores en estado `healthy` y de la interfaz Swagger en `http://localhost:8000/docs`.

#### 6.2.1.9. Team Collaboration Insights during Sprint

# Conclusiones
# Conclusiones y Recomendaciones

**Conclusiones**

- El diseño por bounded context aísla reglas de negocio distintas (facturación, reservas, IoT) sin que un cambio en un contexto obligue a tocar otro; la comunicación entre Reservation, Smart Lighting y IoT Access Management ocurre solo por eventos, no por acoplamiento directo.
- Separar PostgreSQL (datos transaccionales) de TimescaleDB (series de tiempo) resuelve el problema de escala de las lecturas de sensores, que crecen de forma continua y degradarían los dashboards de consumo si se consultaran contra un modelo relacional normal.
- La regla de morosidad (`ResidentMarkedDelinquent`) es un acoplamiento intencional bien resuelto: Payment decide quién es moroso y IoT Access Management actúa sobre esa decisión suspendiendo credenciales, sin que ninguno duplique la lógica del otro.

**Recomendaciones**

- Definir un límite explícito de reintentos y de tiempo para `EdgeGatewaySyncClient`: si el Edge API pierde conexión, conviene declarar cuánto tiempo es aceptable operar en modo degradado con la última lista de credenciales sincronizada.
- Formalizar un contrato de eventos versionado (Schema Registry o versión en el payload) para el Message & Event Broker, ya que varios contextos consumen los mismos eventos de Reservation y Payment; un cambio de esquema sin control rompería a todos a la vez.
- Incorporar pruebas de contrato entre publicadores y consumidores de eventos (por ejemplo `ReservationApproved` y sus consumidores) para detectar incompatibilidades antes de desplegar, ya que la comunicación asíncrona no falla en tiempo de compilación.

# Referencias Bibliográficas

  - Aguilar, K. L. B. (2026). Vacíos regulatorios en la Ley de Propiedad en Condominio, análisis de conflictos recurrentes en su modalidad vertical ubicados en el Distrito Central (Tesis doctoral). Centro Universitario Tecnológico CEUTEC. `https://repositorio.unitec.edu/server/api/core/bitstreams/cd97bbd4-204c-49c8-9901-3d0a5a85d7f3/content`
  - Condominos. (2024, 4 de noviembre). Manejo de chats de WhatsApp de vecinos en condominios. `https://www.condominos.app/sitio/detalle/OA/manejo-de-chats-de-whatsapp-de-vecinos-en-condominios`
`https://www2.deloitte.com/us/en/insights/topics/digital-transformation.html`
  - El Comercio. (2026, 3 de abril). Fallas en la gestión de edificios corporativos pueden generar sobrecostos de hasta 30%. `https://elcomercio.pe/economia/fallas-en-la-gestion-de-edificios-corporativos-pueden-generar-sobrecostos-de-hasta-30-noticia/`
  - Gestión. (2023, 12 de septiembre). Advierten que deudas por gastos en condominios llevan a inquilinos a Infocorp. `https://gestion.pe/tu-dinero/inmobiliarias/advierten-que-deudas-por-gastos-en-condominios-llevan-a-inquilinos-a-infocorp-condominios-deudas-por-pagos-de-mantenimiento-noticia/`
  - GitHub. (s.f.). `https://github.com/`
  - Instituto Nacional de Estadística e Informática (INEI). (2023). Perú: Características de las viviendas particulares y hogares. `https://www.gob.pe/institucion/inei/informes-publicaciones/4377979-las-tecnologias-de-informacion-y-comunicacion-en-los-hogares-ene-feb-mar-2023`
  - Lucidchart. (s.f.). `https://www.lucidchart.com`
  - PlantUML. (s.f.). `https://plantuml.com`
  - ProTool. (2026, 11 de marzo). Administrar un condominio por WhatsApp no es gestión, es un riesgo para la comunidad. `https://www.protool.cl/noticia_detalle.php?slug=administrar-condominios-por-whatsapp-no-es-gestion-es-riesgo`
  - Sociedad Peruana de Bienes Raíces. (2024). Digitalización de edificios y condominios en Perú. `https://bienesraicess.com/blogs/digitalizacion-de-edificios-y-condominios-en-peru`
  - UXPressia. (s.f.). `https://uxpressia.com/`
  - Verastegui Leon, P. A., Mendoza Castañeda, J. L. D. C., Zapata Becerra, M. L., Capristan Leon, K. E., & Ravines Garcia, M. A. (2025). Propuesta de un plan estratégico para mejora de la Gestión en Edificios Multifamiliares en Lima Moderna: Caso De Estudio: MONARCH MANAGERS EIRL. Universidad Peruana de Ciencias Aplicadas. `https://repositorioacademico.upc.edu.pe/handle/10757/686137`

# Anexos
